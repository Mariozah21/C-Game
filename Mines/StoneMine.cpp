//
// Created by kamil on 17.11.2021.
//

#include "StoneMine.h"

std::string StoneMine::getId() {
    return "StoneMine";
}
int StoneMine::getBuildLevel() {
    return m_buildLevel;
}

void StoneMine::setLevel() {
    m_buildLevel ++;
}