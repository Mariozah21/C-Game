//
// Created by kamil on 23.12.2021.
//

#ifndef TRY_MINETYPE_H
#define TRY_MINETYPE_H
#include <iostream>

class MineType {
public:
    std::string m_id;
    int m_buildLevel;
    std::string getId ();
    int getBuildLevel ();
    void setBuildLevel ();
};


#endif //TRY_MINETYPE_H
