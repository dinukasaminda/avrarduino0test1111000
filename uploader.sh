echo "Running uploader script"

/bin/sh /dev/vapps/local/bin/avrdude -C /dev/vapps/avrarduino0test1111000/avrdude.conf -v -patmega328p -carduino -PCOM1 -b57600 -D -Uflash:w:/dev/vapps/avrarduino0test1111000/serial-read-write/serial-read-write.ino.eightanaloginputs.hex:i 