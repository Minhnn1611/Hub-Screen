use crate::error::BridgeIpErr;
use rusqlite::{params, Connection, Result};

pub struct Sqlite {
    pub conn: Connection,
}

impl Sqlite {
    pub async fn new(path: String) -> Self {
        let conn = Connection::open(path.to_string())
            .map_err(|_| BridgeIpErr::CreateSqlErr)
            .unwrap();
        Sqlite { conn: conn }
    }

    pub async fn connect(&mut self) -> Result<(), BridgeIpErr> {
        // Tạo một bảng mới nếu nó chưa tồn tại
        self.conn.execute(
            "CREATE TABLE IF NOT EXISTS devices (
                name TEXT,
                status INTEGER,
                ep INTEGER,
                mac INTEGER,
                type TEXT
            )",
            [],
        )
        .map_err(|_| BridgeIpErr::CreateSqlErr)?;

        Ok(())
    }

    pub async fn add_device(&mut self, name: String, status: bool, ep: u32, mac: u64, type_: String) -> Result<(), BridgeIpErr> {
        self.conn.execute(
            "INSERT INTO devices (name, status, ep, mac, type) VALUES (?1, ?2, ?3, ?4, ?5)",
            params![name, status, ep, mac, type_],
        )
        .map_err(|_| BridgeIpErr::AddSqlErr)?;

        Ok(())
    }

    pub async fn delete_device(&mut self, mac: String) -> Result<(), BridgeIpErr> {
        self.conn
            .execute("DELETE FROM devices WHERE mac = ?1", params![mac])
            .map_err(|_| BridgeIpErr::DeleteSqlErr)?;

        Ok(())
    }

    pub async fn clear(&mut self) -> Result<(), BridgeIpErr> {
        // Xóa toàn bộ dữ liệu từ bảng `devices`
        self.conn
            .execute("DELETE FROM devices", [])
            .map_err(|_| BridgeIpErr::DeleteSqlErr)?;

        Ok(())
    }

    pub async fn get_devices(&mut self) -> Result<Vec<(String, String, String, String, String)>, BridgeIpErr> {
        let mut stmt = self.conn.prepare("SELECT name, status, ep, mac, type FROM devices").map_err(|_| BridgeIpErr::GetSqlErr)?;
        let device_iter = stmt.query_map([], |row| {
            Ok((
                row.get::<usize, String>(0)?,
                row.get::<usize, String>(1)?,
                row.get::<usize, String>(2)?,
                row.get::<usize, String>(3)?,
                row.get::<usize, String>(4)?,
            ))
        }).map_err(|_| BridgeIpErr::GetSqlErr)?;

        let mut devices = Vec::new();
        for device in device_iter {
            devices.push(device.map_err(|_| BridgeIpErr::GetSqlErr)?);
        }
        Ok(devices)
    }
}