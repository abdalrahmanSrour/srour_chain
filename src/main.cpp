/**
 * filename: main.cpp
 * auther: a.srour <a.sr0ur@outlook.com>
 * License: Apache License, Version 2.0, January 2004 (http://www.apache.org/licenses/)
 */

#include <cstdint>
#include <iostream>
#include "BlockChain.h"

int main() {
    Blockchain bChain = Blockchain();

    std::cout << "Mining block 1…" << std::endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    std::cout << "Mining block 2…" << std::endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    std::cout << "Mining block 3…" << std::endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}
