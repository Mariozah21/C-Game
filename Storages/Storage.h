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
    StorageType *m_type;
    std::string m_id;
    int m_buildLevel;
    EnumStorage m_storageType;
public:
    Storage ();
    std::string getId ();
    void changeState (EnumStorage storageType);
    void makeChanges ();
    void storeResources ();
    void setId (std::string id);
    void setBuildingLevel (int buildLevel);
};


#endif //ZOOPROJEKT_STORAGE_H
