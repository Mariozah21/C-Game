//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_STONEMINE_H
#define ZOOPROJEKT_STONEMINE_H
#include "Mines.h"

class StoneMine : public MineType{
    int m_buildLevel = 1;
public:
    std::string getId() override;
    int getBuildLevel() override;
    void setLevel();
};


#endif //ZOOPROJEKT_STONEMINE_H
