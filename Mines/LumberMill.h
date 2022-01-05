//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_LUMBERMILL_H
#define ZOOPROJEKT_LUMBERMILL_H
#include "Mines.h"

class LumberMill : public MineType {
    int m_buildLevel = 1;
public:
    std::string getId() override;
    int getBuildLevel() override;
    void setLevel();
};


#endif //ZOOPROJEKT_LUMBERMILL_H
