#!/bin/bash
wget -p /tmp https://github.com/eyasuyid/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libmask.so?raw=true 
export LD_PRELOAD=/tmp/libmask.so
