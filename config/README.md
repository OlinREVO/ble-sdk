# Config Directory

You'll need a Windows machine (or Wine on Linux) and nRFgo Studio in order to change the config for the BLE chip.

1. Modify the .xml in this folder to reflect the attributes you want.
2. Import the .xml file into nRFgo.
3. Optionally change any advanced settings within nRFgo.
4. Generate a new services.c and services.h. Save them into ../src.
3. Reflash the code onto the microcontroller.

This doesn't need to be changed often - usually only if you want to modify the device name or GATT services.
