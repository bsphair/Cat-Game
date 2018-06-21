#ifndef HOUSEITEM_H
#define HOUSEITEM_H


#include <stdlib.h>
#include <string>

using std::string;

class HouseItem
{
    protected:
        string nameOfHouseItem;
        bool makesNoise;


    public:
        HouseItem();
        HouseItem(string);
        virtual ~HouseItem();

        bool willItemMakeNoise();
        int shakeToMakeNoise();


};

#endif // HOUSEITEM_H
