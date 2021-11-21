//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_GOLDMINE_H
#define ZOOPROJEKT_GOLDMINE_H

#include <iostream>
#include "Mines.h"
#include "Building.h"

class GoldMine : public Mines{
    std::string m_id;
    int buildLevel;
public:
    GoldMine();
    std::string getId ();
    void generateResources (); // zavolání metody generateResources, aby se vygenerovalo zlato (až v implementaci)
};


#endif //ZOOPROJEKT_GOLDMINE_H
