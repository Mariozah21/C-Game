
//
// Created by kamil on 23.12.2021.
//

#ifndef TRY_LUMBERMILL_H
#define TRY_LUMBERMILL_H
#include "MineType.h"

class LumberMill : public MineType {
public:
    LumberMill ();
    std::string getId ();
    int getBuildLevel ();
};


#endif //TRY_LUMBERMILL_H
