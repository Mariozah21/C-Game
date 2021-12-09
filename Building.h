//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_BUILDING_H
#define ZOOPROJEKT_BUILDING_H

#include <iostream>
#include "Mines/GoldMine.h"
#include "Mines/StoneMine.h"
#include "Mines/LumberMill.h"
#include "Storages/GoldStorage.h"
#include "Storages/StoneStorage.h"
#include "Storages/WoodStorage.h"
#include "Storages/TownHall.h"
#include "World.h"


class Building{

    int m_maxBuildingLevel;
    int m_buildLevel;
public:
    Building(std::string type);
    //void buildBuilding(std::string type);
    void upgradeBuilding(std::string type, GoldMine *GM,StoneMine *SM,LumberMill *LM, TownHall *TH,GoldStorage *GS,StoneStorage *SS,WoodStorage *WS);
};



#endif //ZOOPROJEKT_BUILDING_H
