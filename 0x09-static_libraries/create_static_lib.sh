#!/bin/sh
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
