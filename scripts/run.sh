#!/usr/bin/env bash

g++ -I src/include -L src/lib -o main ./src/*.cpp -w -lSDL2
