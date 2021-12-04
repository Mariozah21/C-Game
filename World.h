//
// Created by kamil on 04.12.2021.
//

#ifndef ZOOPROJEKT_WORLD_H
#define ZOOPROJEKT_WORLD_H
#include <iostream>
#include <vector>
#include "Building.h"

class World {
    int m_rows;
    int m_columns;
    std::vector<std::vector<Building *> > m_map;
public:
    World ();
    void createMap ();
    void addRow ();
    void addColumn ();
    void placeBuilding (int row, int column, Building *b);
    void showMap ();
};


#endif //ZOOPROJEKT_WORLD_H
