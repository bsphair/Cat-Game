/****************************************************************************************************************************
** File Name: kitchen.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the Kitchen class
****************************************************************************************************************************/
#ifndef KITCHEN_H
#define KITCHEN_H

class LivingRoom;
class FoodCloset;
class Patio;

class Kitchen : public Room
{
    protected:
        bool foodBowlIsEmpty;
        bool catTreat;

    public:
        Kitchen();
        virtual ~Kitchen();

        void setKitchenWalls(LivingRoom*, FoodCloset*, Patio*);

        bool getFoodBowlStatus();
        void changeFoodBowlStatus();

        bool isThereACatTreat();
        void foundATreat();

};

#endif // KITCHEN_H



