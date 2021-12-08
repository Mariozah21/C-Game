//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_GOLDMINE_H
#define ZOOPROJEKT_GOLDMINE_H
#include "Mines.h"
#include "../Building.h"

class GoldMine : public Mines{
    std::string m_id;
    int m_buildLevel;
public:
    GoldMine();
    void setLevel();
    std::string getId ();
    int getBuildLevel ();
    void generateResources (); // zavolání metody generateResources, aby se vygenerovalo zlato (až v implementaci)
};


#endif //ZOOPROJEKT_GOLDMINE_H
