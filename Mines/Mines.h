//
// Created by kamil on 17.11.2021.
//
#ifndef ZOOPROJEKT_MINES_H
#define ZOOPROJEKT_MINES_H
#include <iostream>
#include "../Building.h"
#include "../Housing.h"

class Mines: public Building{
    std::string m_id;
    int resource;
public:
    Mines ();
    std::string getId ();
    void generateResources (std::string id, int buildLevel);
    int getResource ();
};


#endif //ZOOPROJEKT_MINES_H
