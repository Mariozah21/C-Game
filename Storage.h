//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_STORAGE_H
#define ZOOPROJEKT_STORAGE_H

#include <iostream>
#include "Mines.h"
#include "GoldStorage.h"
#include "WoodStorage.h"
#include "StoneStorage.h"

class Storage{
public:
    void storeResources (int resourceQuantity, std::string id);
};


#endif //ZOOPROJEKT_STORAGE_H
