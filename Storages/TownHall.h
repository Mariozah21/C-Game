
//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_TOWNHALL_H
#define ZOOPROJEKT_TOWNHALL_H
#include "Storage.h"
#include "../Building.h"

class TownHall{
    std::string m_id;
    int m_buildLevel;
    int m_storedGold;
    int m_storedStone;
    int m_storedWood;
    int m_maxGold;
    int m_maxStone;
    int m_maxWood;
public:
    TownHall ();
    std::string getId ();
    int getBuildLevel ();
    bool checkGoldStorage (int resourceQuantity);
    bool checkStoneStorage (int resourceQuantity);
    bool checkWoodStorage (int resourceQuantity);
    void storeGold (int resourceQuantity);
    void storeStone (int resourceQuantity);
    void storeWood (int resourceQuantity);
    int getGold ();
    int getStone ();
    int getWood ();
    int getMaxGold ();
    int getMaxStone ();
    int getMaxWood ();
    void setLevel();
};


#endif //ZOOPROJEKT_TOWNHALL_H
