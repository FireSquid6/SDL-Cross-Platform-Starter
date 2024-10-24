#!/usr/bin/env bash

g++ ./src/*.cpp -I ./src -o main -w -lSDL2
./main
rm main

# only for people who use ccls
# if you have a normal ide you do not need this
# lsp:
# 	bear -- $(command)
