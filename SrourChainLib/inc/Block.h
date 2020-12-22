/**
 * filename: Block.h
 * auther: a.srour <a.sr0ur@outlook.com>
 * License: Apache License, Version 2.0, January 2004 (http://www.apache.org/licenses/)
 */

#ifndef _BLOCK_H_
#define _BLOCK_H_

#include <cstdint>
#include <string>

class Block
{
public:
    std::string sPrevHash;
    Block(uint32_t nIndexIn, const std::string &sDataIn);
    std::string GetHash();
    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    std::string _sData;
    std::string _sHash;
    time_t _tTime;
    std::string _CalculateHash() const;
};

#endif /* _BLOCK_H_ */
