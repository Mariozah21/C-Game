//
// Created by kamil on 17.11.2021.
//

#include "StoneMine.h"
StoneMine::StoneMine() {
    m_id = "StoneMine";
}

std::string StoneMine::getId() {
    return m_id;
}

void StoneMine::generateResources(){
    Mines::generateResources("StoneMine");
};