/**
 * filename: BlockChain.h
 * auther: a.srour <a.sr0ur@outlook.com>
 * License: Apache License, Version 2.0, January 2004 (http://www.apache.org/licenses/)
 */

#ifndef _BLOCK_CHAIN_H_
#define _BLOCK_CHAIN_H_

#include <cstdint>
#include <vector>
#include "Block.h"
using namespace std;

class Blockchain
{
public:
    Blockchain();
    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;
    Block _GetLastBlock() const;
};

#endif /* _BLOCK_CHAIN_H_ */