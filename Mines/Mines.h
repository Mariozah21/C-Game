//
// Created by kamil on 17.11.2021.
//
#ifndef ZOOPROJEKT_MINES_H
#define ZOOPROJEKT_MINES_H
#include <iostream>
#include "../Building.h"
#include "../Housing.h"
#include "EnumMine.h"
#include "MineType.h"

class Mines: public Building{
    MineType *m_type;
    std::string m_id;
    int m_buildLevel;
    int resource;
    EnumMine m_mineType;
public:
    Mines ();
    std::string getId ();
    void changeState (EnumMine mineType);
    void makeChanges ();
    int generateResources ();
    void setId (std::string id);
    void setBuildingLevel (int buildLevel);
};


#endif //ZOOPROJEKT_MINES_H
