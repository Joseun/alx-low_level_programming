#!/bin/bash
wget -P /tmp https://github.com/Joseun/alx-low_level_programming/blob/master/0x18-dynamic_libraries/preload.so?raw=true
export LD_PRELOAD=/tmp/preload.so ldd gm
