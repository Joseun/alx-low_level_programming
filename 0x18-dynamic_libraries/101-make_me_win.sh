#!/bin/bash
gcc -shared -fPIC preload.c -o preload.so -ldl
export LD_PRELOAD=/home/vagrant/alx-low_level_programming/0x18-dynamic_libraries/preload.so ldd gm
