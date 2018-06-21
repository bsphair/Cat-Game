#include "foodplate.hpp"

FoodPlate::FoodPlate()
{
    hasFoodOnPlate = true;
}

FoodPlate::~FoodPlate()
{
    //dtor
}


void FoodPlate::setHasFoodOnPlate()
{
    hasFoodOnPlate = true;
}



bool FoodPlate::getHasFoodOnPlate()
{
    return hasFoodOnPlate;
}


int FoodPlate::nutritionalFoodValue()
{
    return 5;
}
