use clap::Parser;
use system_intergration::SystemIntergration;
pub mod error;
pub mod ota;
pub mod logic;
pub mod proto;
pub mod system_intergration;
pub mod transport;
pub mod sqlite;
pub mod cloud;
#[derive(Debug, Parser)]
#[command(author, version, about, long_about = None)]
struct Args {
    #[clap(short, long)]
    db: String,
    #[clap(short, long)]
    ota: String
}

#[tokio::main]
async fn main() {
    env_logger::builder().format_timestamp_millis().init();

    let args = Args::parse();
    log::info!("args: {:?}", args);

    let mut system_intergration = SystemIntergration::new(args.db, args.ota).await;
    system_intergration.init().await;

    loop {
        match system_intergration.recv().await {
            Ok(_) => {}
            Err(e) => {
                log::error!("{:?}", e);
                break;
            }
        }
    }
}
