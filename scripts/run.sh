#!/usr/bin/env bash

echo "COMPILING..."
g++ ./src/*.cpp -I ./src -o main -w -lSDL2
echo "RUNNING..."
./main

# only for people who use ccls
# if you have a normal ide you do not need this
# lsp:
# 	bear -- $(command)
