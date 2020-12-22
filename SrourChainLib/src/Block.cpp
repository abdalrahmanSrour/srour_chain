/**
 * filename: Block.cpp
 * auther: a.srour <a.sr0ur@outlook.com>
 * License: Apache License, Version 2.0, January 2004 (http://www.apache.org/licenses/)
 */

#include <sstream>
#include <iostream>
#include "sha256.h"
#include "Block.h"
#include "time.h"

Block::Block(uint32_t nIndexIn, const std::string &sDataIn) : _nIndex(nIndexIn),
                                                         _sData(sDataIn)
{
    _nNonce = -1;
    _tTime = time(nullptr);
}

std::string Block::GetHash()
{
    return _sHash;
}

void Block::MineBlock(uint32_t nDifficulty)
{
    char *cstr = new char[nDifficulty + 1];
    for (uint32_t i = 0; i < nDifficulty; ++i)
    {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';
    std::string str(cstr);
    do
    {
        _nNonce++;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, nDifficulty) != str);
    std::cout << "Block mined : " << _sHash << std::endl;
}

inline std::string Block::_CalculateHash() const
{
    std::stringstream ss;
    ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;
    return sha256(ss.str());
}
