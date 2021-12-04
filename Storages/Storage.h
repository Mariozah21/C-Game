//
// Created by kamil on 03.12.2021.
//

#ifndef ZOOPROJEKT_STORAGE_H
#define ZOOPROJEKT_STORAGE_H
#include <iostream>
#include "../Building.h"
#include "../Mines/Mines.h"
#include "GoldStorage.h"
#include "StoneStorage.h"
#include "WoodStorage.h"
#include "TownHall.h"


class Storage : public Building {
    std::string m_id;
public:
    Storage ();
    std::string getId ();
    void storeResources (int resourceQuantity, std::string id);
};


#endif //ZOOPROJEKT_STORAGE_H
