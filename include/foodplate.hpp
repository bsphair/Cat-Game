#ifndef FOODPLATE_H
#define FOODPLATE_H

#include <houseitem.hpp>


class FoodPlate : public HouseItem
{
    protected:
        bool hasFoodOnPlate ;


    public:
        FoodPlate();
        virtual ~FoodPlate();

        void setHasFoodOnPlate();
        bool getHasFoodOnPlate();

        int nutritionalFoodValue();






};

#endif // FOODPLATE_H
