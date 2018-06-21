/****************************************************************************************************************************
** File Name: foodcloset.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the FoodCloset class
****************************************************************************************************************************/
#ifndef FOODCLOSET_H
#define FOODCLOSET_H

class Kitchen;


class FoodCloset : public Room
{
    protected:
        bool hasFoodBag;

    public:
        FoodCloset();
        virtual ~FoodCloset();

        void setFoodClosetWalls(Kitchen*);

        bool lookForFoodBag();

};

#endif // FOODCLOSET_H
