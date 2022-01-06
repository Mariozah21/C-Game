//
// Created by kamil on 22.12.2021.
//

#ifndef TRY_GOLDMINE_H
#define TRY_GOLDMINE_H
#include "MineType.h"

class GoldMine : public MineType{
public:
    GoldMine ();
    std::string getId ();
    int getBuildLevel ();
};


#endif //TRY_GOLDMINE_H
