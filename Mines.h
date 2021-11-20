//
// Created by kamil on 17.11.2021.
//
#ifndef ZOOPROJEKT_MINES_H
#define ZOOPROJEKT_MINES_H
#include <iostream>
#include "Building.h"
#include "Storage.h"

class Mines: public Building{
    std::string m_id;
public:
    void generateResources (std::string id);
};


#endif //ZOOPROJEKT_MINES_H
