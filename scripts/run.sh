#!/usr/bin/env bash

g++ -I src/include -L src/lib -o main ./src/*.cpp -l SDL2main -l SDL2
