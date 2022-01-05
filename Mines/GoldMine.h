//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_GOLDMINE_H
#define ZOOPROJEKT_GOLDMINE_H
#include "Mines.h"

class GoldMine : public MineType{
    int m_buildLevel = 1;
public:
    std::string getId() override;
    int getBuildLevel() override;
    void setLevel();
};


#endif //ZOOPROJEKT_GOLDMINE_H
