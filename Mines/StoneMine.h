//
// Created by kamil on 23.12.2021.
//

#ifndef TRY_STONEMINE_H
#define TRY_STONEMINE_H
#include "MineType.h"

class StoneMine : public MineType{
public:
    StoneMine ();
    std::string getId ();
    int getBuildLevel ();
};


#endif //TRY_STONEMINE_H
