#!/bin/bash
gcc -shared *.o -o libruin.so
LD_PRELOAD=$PWD/libruin.so
