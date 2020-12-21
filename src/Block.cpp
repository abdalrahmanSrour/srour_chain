/**
 * filename: Block.cpp
 * auther: a.srour <a.sr0ur@outlook.com>
 * License: Apache License, Version 2.0, January 2004 (http://www.apache.org/licenses/)
 */

#include "sh256.h"
#include "Block.h"
#include "time.h"

Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn),
                                                         _sData(sDataIn)
{
    _nNonce = -1;
    _tTime = time(nullptr);
}

string Block::GetHash()
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
    string str(cstr);
    do
    {
        _nNonce++;
        _sHash = _CalculateHash();
    } while (_sHash.substr(0, nDifficulty) != str);
    cout << "Block mined : " << _sHash << endl;
}

inline string Block::_CalculateHash() const
{
    stringstream ss;
    ss << _nIndex << _tTime << _sData << _nNonce << sPrevHash;
    return sha256(ss.str());
}
