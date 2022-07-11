#!/bin/bash
wget -q -P /tmp https://github.com/Hailemariam-Moges/alx-low_level_programming
/raw/main/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
