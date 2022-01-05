//
// Created by kamil on 17.11.2021.
//

#include "LumberMill.h"

std::string LumberMill::getId() {
    return "LumberMill";
}
int LumberMill::getBuildLevel() {
    return m_buildLevel;
}

void LumberMill::setLevel() {
    m_buildLevel ++;
}

