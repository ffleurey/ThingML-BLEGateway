# ThingML-BLEGateway

Setup a RPI3 as a BLE Gateway.


#### Installation of the Raspbian OS
 * SD card was flashed with image "2017-09-07-raspbian-stretch-lite.img" usind dd: 

`sudo dd bs=4M if=2017-09-07-raspbian-stretch-lite.img of=/dev/sdXXX conv=fsync`

* Insert the SD card in the Pi 3, Plugin power, HDMI and a keyboard. This is necessary because the ssh server in this image is installed but not automatically started. Login with pi / raspberry and enable the ssh server with:

`sudo systemctl enable ssh.service`

**Remark:** There is an option to enable the ssh server by writing a file called ssh in /boot on the SD card to avoid the need for a keyboard/screen. See https://raspberrypi.stackexchange.com/questions/1747/starting-ssh-automatically-at-boot-time. I have not tried.

* Find the IP address of the PI and login with ssh

* Update the system
`sudo apt-get update`
 `sudo apt-get upgrade`

