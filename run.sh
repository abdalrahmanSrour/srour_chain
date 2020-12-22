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

echo "$@ >>> Run mining example"
./examples/mining/SrourChainMiningExample

tail -F $0
