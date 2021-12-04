cmake_minimum_required(VERSION 3.20)
project(ZOOProjekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(ZOOProjekt main.cpp Building.cpp Building.h Mines/Mines.cpp Mines/Mines.h Mines/GoldMine.cpp Mines/GoldMine.h Storages/Storage.cpp Storages/Storage.h Mines/StoneMine.cpp Mines/StoneMine.h Mines/LumberMill.cpp Mines/LumberMill.h Housing.cpp Housing.h Storages/TownHall.cpp Storages/TownHall.h Storages/WoodStorage.cpp Storages/WoodStorage.h Storages/StoneStorage.cpp Storages/StoneStorage.h Storages/GoldStorage.cpp Storages/GoldStorage.h GameEngine.cpp GameEngine.h Storages/Storage.cpp Storages/Storage.h World.cpp World.h)
