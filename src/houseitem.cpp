#include "houseitem.hpp"

HouseItem::HouseItem()
{
    //ctor
}

HouseItem::HouseItem(string itemName)
{
    nameOfHouseItem = itemName;
    makesNoise = false;
}

HouseItem::~HouseItem()
{
    //dtor
}

bool HouseItem::willItemMakeNoise()
{
    return makesNoise;
}


int HouseItem::shakeToMakeNoise()
{
    int noiseLevel = (rand()% 5) + 1;
    return noiseLevel;
}
