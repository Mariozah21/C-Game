//
// Created by kamil on 17.11.2021.
//

#include "Building.h"

Building::Building(std::string type) {
    if(type=="GoldMine"){
        new GoldMine();
    }if(type=="StoneMine"){
        new StoneMine();
    }if(type=="LumberMill"){
        new LumberMill();
    }

}

void Building::upgradeBuilding(std::string type,GoldMine *GM,StoneMine *SM,LumberMill *LM, TownHall *TH,GoldStorage *GS,StoneStorage *SS,WoodStorage *WS) {
    if(type=="GoldMine"){
        if(GM->getBuildLevel()<maxBuildingLevel){
            if(GM->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                "To upgrade this Gold Mine level "<<GM->getBuildLevel()<<
                " you need: \n Gold:"<<GM->getBuildLevel()*10<<
                "\n Stone"<<GM->getBuildLevel()*5<<
                "\n Wood:"<<GM->getBuildLevel()*5<<std::endl;
                GM->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
           std::cout<<"Building is Max level"<<std::endl;;
        }
    }if(type=="StoneMine"){
        if(SM->getBuildLevel()<maxBuildingLevel){
            if(SM->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                "To upgrade this Gold Mine level "<<SM->getBuildLevel()<<
                " you need: \n Gold:"<<SM->getBuildLevel()*10<<
                "\n Stone"<<SM->getBuildLevel()*5<<
                "\n Wood:"<<SM->getBuildLevel()*5<<std::endl;
                SM->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
            std::cout<<"Building is Max level";
        }
    }if(type=="LumberMill"){
        if(LM->getBuildLevel()<maxBuildingLevel){
            if(LM->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                     "To upgrade this Gold Mine level "<<LM->getBuildLevel()<<
                     " you need: \n Gold:"<<LM->getBuildLevel()*10<<
                     "\n Stone"<<LM->getBuildLevel()*5<<
                     "\n Wood:"<<LM->getBuildLevel()*5<<std::endl;
                LM->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
            std::cout<<"Building is Max level";
        }
    }if(type=="TownHall"){
        if(TH->getBuildLevel()<maxBuildingLevel){
            std::cout<<
            "To upgrade this Gold Mine level "<<TH->getBuildLevel()<<
            " you need: \n Gold:"<<TH->getBuildLevel()*10<<
            "\n Stone"<<TH->getBuildLevel()*5<<
            "\n Wood:"<<TH->getBuildLevel()*5<<std::endl;
            TH->setLevel();
        }else{
            std::cout<<"Building is Max level";
        }
    }if(type=="GoldStorage"){
        if(GS->getBuildLevel()<maxBuildingLevel){
            if(GS->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                "To upgrade this Gold Mine level "<<GS->getBuildLevel()<<
                " you need: \n Gold:"<<GS->getBuildLevel()*10<<
                "\n Stone"<<GS->getBuildLevel()*5<<
                "\n Wood:"<<GS->getBuildLevel()*5<<std::endl;
                GS->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
            std::cout<<"Building is Max level";
        }
    }if(type=="StoneStorage"){
        if(SS->getBuildLevel()<maxBuildingLevel){
            if(SS->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                "To upgrade this Gold Mine level "<<SS->getBuildLevel()<<
                " you need: \n Gold:"<<SS->getBuildLevel()*10<<
                "\n Stone"<<SS->getBuildLevel()*5<<
                "\n Wood:"<<SS->getBuildLevel()*5<<std::endl;
                SS->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
            std::cout<<"Building is Max level";
        }
    }if(type=="WoodStorage"){
        if(WS->getBuildLevel()<maxBuildingLevel){
            if(WS->getBuildLevel()<TH->getBuildLevel()){
                std::cout<<
                "To upgrade this Gold Mine level "<<WS->getBuildLevel()<<
                " you need: \n Gold:"<<WS->getBuildLevel()*10<<
                "\n Stone"<<WS->getBuildLevel()*5<<
                "\n Wood:"<<WS->getBuildLevel()*5<<std::endl;
                WS->setLevel();
            }else{
                std::cout<<"Upgrade your TownHall first"<<std::endl;
            }
        }else{
            std::cout<<"Building is Max level";
        }
    }

}
