//
// Created by kamil on 16.12.2021.
//

#ifndef ZOOPROJEKT_MINETYPE_H
#define ZOOPROJEKT_MINETYPE_H
#include <iostream>

class MineType {
public:
    virtual std::string getId() = 0;
    virtual int getBuildLevel() = 0;
};


#endif //ZOOPROJEKT_MINETYPE_H
