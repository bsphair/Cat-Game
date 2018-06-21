/****************************************************************************************************************************
** File Name: dinningroom.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the DinningRoom class
****************************************************************************************************************************/
#ifndef DINNINGROOM_H
#define DINNINGROOM_H

#include <iostream>

class Patio;
class LivingRoom;
class BathRoom;

class DinningRoom : public Room
{
    protected:
        bool plateOfFood;
        int plateOfFoodNutrition;
        bool lampIsOn;
        int lampStrength;

    public:
        DinningRoom();
        virtual ~DinningRoom();

        void setDinningRoomWalls(BathRoom* b, Patio* p, LivingRoom* l);

        bool checkIfPlateIsFullOrEmpty();
        int emptyFoodPlate();
        int getPlateNutrition();


        bool getHasHuman();

        void updateLampStrength();
        bool getIsLampOn();


};

#endif // DINNINGROOM_H
