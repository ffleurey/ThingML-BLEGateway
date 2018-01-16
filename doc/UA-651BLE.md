# Advertisement report:

'
[INFO]: Got advertisement report!
Advertisement report:
	Type: connectable unidirected advertising
	Address type: public device address
	Address: 5C:31:3E:00:4B:6B
	Data:
		 Flags: [LE limited discoverable] [BR/EDR not supported] 
		 Services (16-bit): [1810] 
		 Type 12 [5]
[INFO]: Got advertisement report!
Advertisement report:
	Type: scan response
	Address type: public device address
	Address: 5C:31:3E:00:4B:6B
	Data:
		 Type 0A [2]
		 Local Name: A&D_UA-651BLE_004B6B
'





## Pairing session with `bluetoothctrl`

```
pi@TelluGW:~ $ sudo bluetoothctl
[NEW] Controller B8:27:EB:55:01:D4 TelluGW [default]
[bluetooth]# power on
Changing power on succeeded
[bluetooth]# agent on
Agent registered
[bluetooth]# default-agent 
Default agent request successful
[bluetooth]# devices
[bluetooth]# list
Controller B8:27:EB:55:01:D4 TelluGW [default]
[bluetooth]# scan
Missing on/off argument
[bluetooth]# scan on
Discovery started
[CHG] Controller B8:27:EB:55:01:D4 Discovering: yes
[NEW] Device 00:1F:5B:7E:AC:16 00-1F-5B-7E-AC-16
[CHG] Device 00:1F:5B:7E:AC:16 LegacyPairing: no
[CHG] Device 00:1F:5B:7E:AC:16 Name: Samarin Byggeserver
[CHG] Device 00:1F:5B:7E:AC:16 Alias: Samarin Byggeserver
[CHG] Device 00:1F:5B:7E:AC:16 LegacyPairing: yes
[NEW] Device 5C:31:3E:00:4B:6B A&D_UA-651BLE_004B6B
[bluetooth]# connect 5C:31:3E:00:4B:6B
Attempting to connect to 5C:31:3E:00:4B:6B
[CHG] Device 5C:31:3E:00:4B:6B Connected: yes
Connection successful
Request authorization]# 
[agent] Accept pairing (yes/no): yes
[NEW] Primary Service
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service000c
	00001801-0000-1000-8000-00805f9b34fb
	Generic Attribute Profile
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service000c/char000d
	00002a05-0000-1000-8000-00805f9b34fb
	Service Changed
[NEW] Descriptor
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service000c/char000d/desc000f
	00002902-0000-1000-8000-00805f9b34fb
	Client Characteristic Configuration
[NEW] Primary Service
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0010
	00001810-0000-1000-8000-00805f9b34fb
	Blood Pressure
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0010/char0011
	00002a35-0000-1000-8000-00805f9b34fb
	Blood Pressure Measurement
[NEW] Descriptor
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0010/char0011/desc0013
	00002902-0000-1000-8000-00805f9b34fb
	Client Characteristic Configuration
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0010/char0014
	00002a49-0000-1000-8000-00805f9b34fb
	Blood Pressure Feature
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0010/char0016
	00002a08-0000-1000-8000-00805f9b34fb
	Date Time
[NEW] Primary Service
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018
	0000180a-0000-1000-8000-00805f9b34fb
	Device Information
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char0019
	00002a29-0000-1000-8000-00805f9b34fb
	Manufacturer Name String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char001b
	00002a24-0000-1000-8000-00805f9b34fb
	Model Number String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char001d
	00002a25-0000-1000-8000-00805f9b34fb
	Serial Number String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char001f
	00002a27-0000-1000-8000-00805f9b34fb
	Hardware Revision String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char0021
	00002a26-0000-1000-8000-00805f9b34fb
	Firmware Revision String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char0023
	00002a28-0000-1000-8000-00805f9b34fb
	Software Revision String
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char0025
	00002a23-0000-1000-8000-00805f9b34fb
	System ID
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0018/char0027
	00002a2a-0000-1000-8000-00805f9b34fb
	IEEE 11073-20601 Regulatory Cert. Data List
[NEW] Primary Service
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0029
	0000180f-0000-1000-8000-00805f9b34fb
	Battery Service
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service0029/char002a
	00002a19-0000-1000-8000-00805f9b34fb
	Battery Level
[NEW] Primary Service
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service002c
	233bf000-5a34-1b6d-975c-000d5690abe4
	Vendor specific
[NEW] Characteristic
	/org/bluez/hci0/dev_5C_31_3E_00_4B_6B/service002c/char002d
	233bf001-5a34-1b6d-975c-000d5690abe4
	Vendor specific
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 00001800-0000-1000-8000-00805f9b34fb
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 00001801-0000-1000-8000-00805f9b34fb
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 0000180a-0000-1000-8000-00805f9b34fb
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 0000180f-0000-1000-8000-00805f9b34fb
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 00001810-0000-1000-8000-00805f9b34fb
[CHG] Device 5C:31:3E:00:4B:6B UUIDs: 233bf000-5a34-1b6d-975c-000d5690abe4
[CHG] Device 5C:31:3E:00:4B:6B ServicesResolved: yes
[CHG] Device 5C:31:3E:00:4B:6B Paired: yes
[CHG] Device 00:1F:5B:7E:AC:16 RSSI: -64
[A&D_UA-651BLE_004B6B]# list
Controller B8:27:EB:55:01:D4 TelluGW [default]
[A&D_UA-651BLE_004B6B]# disconnect 
Attempting to disconnect from 5C:31:3E:00:4B:6B
[CHG] Device 5C:31:3E:00:4B:6B ServicesResolved: no
Successful disconnected
[CHG] Device 5C:31:3E:00:4B:6B Connected: no
[CHG] Device 00:1F:5B:7E:AC:16 RSSI: -74
[bluetooth]# paired-devices 
Device 5C:31:3E:00:4B:6B A&D_UA-651BLE_004B6B
[bluetooth]# quit
```