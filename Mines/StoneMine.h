//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_STONEMINE_H
#define ZOOPROJEKT_STONEMINE_H

#include <iostream>
#include "Mines.h"

class StoneMine : public Mines{
    std::string m_id;
    int m_buildLevel;
public:
    StoneMine();
    std::string getId ();
    int getBuildLevel ();
    void generateResources (); // zavolání metody generateResources, aby se vygeneroval kámen (až v implementaci)
    void setLevel();
};


#endif //ZOOPROJEKT_STONEMINE_H
