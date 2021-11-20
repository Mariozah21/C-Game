//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_STONEMINE_H
#define ZOOPROJEKT_STONEMINE_H
#include <iostream>
#include "Mines.h"

class StoneMine : public Mines{
    std::string m_id;
public:
    StoneMine();
    std::string getId ();
    // zavolání metody generateResources, aby se vygeneroval kámen (až v implementaci)
};


#endif //ZOOPROJEKT_STONEMINE_H
