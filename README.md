Robotics
==============

## Abstract

## Requirements
Although this software was originally designed for mbed, most of its libraries is to be applicable to various artificial intelligence development.

This projects requires cmake and CppUTest. 

In order to compile specifically for mbed, you need to go to [mbed platform](https://mbed.org).

## CMake
add
```sh
export CPPUTEST_HOME=/usr/local/Cellar/cpputest/3.6
```
to .bash_profile or .bashrc

## Build
```sh
$ mkdir build
$ cd build
$ cmake ..
$ make
```
