# Firmware

Paste the folder into
```
qmk_firmware/keyboards
```
Compile the code :
```
make ergocheap:default
```

Flashing the firmware using cli ([QMK MSYS](https://msys.qmk.fm/)):
```
dfu-util -a 2 -D 1eaf:0003 -U ergocheap_default.bin
```