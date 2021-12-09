//
// Created by kamil on 04.12.2021.
//

#include "World.h"

World::World() {
    m_rows = 3;
    m_columns = 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m_map.at(i).at(j) = new Building("No Building");
        }
    }
}

void World::placeBuilding(int row, int column, Building *b) {
    m_map.at(row).at(column) = b;
}

void World::addRow() {
    m_rows ++;
    m_map.resize(m_rows);
}

void World::addColumn() {
    m_columns ++;
    m_map.resize(m_columns);
}
void World::showMap() {
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_columns; ++j) {
            std::cout << "|" << m_map.at(i).at(j) << "|" << std::endl;
        }
    }
}