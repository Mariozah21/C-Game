//
// Created by kamil on 17.11.2021.
//
#ifndef ZOOPROJEKT_MINES_H
#define ZOOPROJEKT_MINES_H
#include <iostream>
#include "Building.h"
#include "Housing.h"

class Mines: public Building{
    std::string m_id;
    int resource;
public:
    Mines ();
    void generateResources (std::string id, int buildLevel); // v diagramu mi nejde ta metoda dát do kurzívy
    int getResource ();
};


#endif //ZOOPROJEKT_MINES_H
