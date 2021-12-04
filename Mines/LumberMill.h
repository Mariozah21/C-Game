//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_LUMBERMILL_H
#define ZOOPROJEKT_LUMBERMILL_H

#include <iostream>
#include "Mines.h"

class LumberMill : public Mines{
    std::string m_id;
    int m_buildLevel;
public:
    LumberMill ();
    std::string getId ();
    int getBuildLevel ();
    void generateResources (); // zavolání metody generateResources, aby se vygenerovalo dřevo (až v implementaci)
};


#endif //ZOOPROJEKT_LUMBERMILL_H
