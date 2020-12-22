#!/bin/sh
# # build application
# make build

# # run application
# make run

echo "$0 >>> Setup..."
mkdir -p build
cd build
cmake ..

echo "$0 >>> Building..."
make

echo "$@ >>> Run miningDiff3 example"
./examples/miningDiff3/SrourChainMiningDiff3Example

tail -F $0
