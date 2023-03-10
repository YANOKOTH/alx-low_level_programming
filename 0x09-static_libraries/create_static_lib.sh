#!/bin/bash
main.h=$(ls *.c)| gcc -c main.h| ar rcs liball.a *.o|rm *.o
