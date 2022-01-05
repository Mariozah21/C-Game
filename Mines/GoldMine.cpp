//
// Created by kamil on 17.11.2021.
//

#include "GoldMine.h"

std::string GoldMine::getId() {
    return "GoldMine";
}
int GoldMine::getBuildLevel() {
    return m_buildLevel;
}

void GoldMine::setLevel() {
    m_buildLevel ++;
}
