
build: TestChain

TestChain:
	mkdir -p build
	g++ -lstdc++ -Isrc -o ./build/TestChain -std=c++11 -x c++ src/main.cpp src/Block.cpp src/BlockChain.cpp src/sha256.cpp

run: TestChain
	./build/TestChain

.PHONY: clean

clean:
	rm -rf ./build