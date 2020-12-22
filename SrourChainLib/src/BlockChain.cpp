#include "BlockChain.h"

Blockchain::Blockchain(uint32_t difficulty) {
    this->_vChain.emplace_back(Block(0, "Genesis Block"));
    this->_nDifficulty = difficulty;
}

void Blockchain::AddBlock(Block bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}
