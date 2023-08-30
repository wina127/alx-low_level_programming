#!/bin/bash
wget -p .. https://raw.githubsercontent.com/monoprosito/holbertonschool-low_level_programming/master/0x018-dynamic_libraries/libgiga.so 
export LD_PRELOAD="$PWD/../libgiga.so"
