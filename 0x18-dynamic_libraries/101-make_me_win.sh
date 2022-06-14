#!/bin/bash
gcc -shared *.o -o libruin.so -fpic
LD_PRELOAD=$PWD/libruin.so
