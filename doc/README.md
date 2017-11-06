# Execute BLE programs without root privileges.

The bluetooth stack uses "capabilities". To be executed by a normal user, the executable need to be given the right capabilities.

For the executable BLE_PAIR, after compiling it, run

'sudo setcap 'cap_net_raw,cap_net_admin+eip' BLE_PAIR'

Capabilities can be checked by 'getcap BLE_PAIR' which should return:
BLE_PAIR = cap_net_admin,cap_net_raw+eip

see: https://unix.stackexchange.com/questions/96106/bluetooth-le-scan-as-non-root
see: https://wiki.archlinux.org/index.php/Capabilities
