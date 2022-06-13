#!/bin/bash
wget -P /tmp/ https://raw.github.com/wilfex81/alx-low_level_programming/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
