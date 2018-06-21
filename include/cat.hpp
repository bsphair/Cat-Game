/****************************************************************************************************************************
** File Name: cat.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the Cat class
****************************************************************************************************************************/
#ifndef CAT_H
#define CAT_H



class Cat
{
    protected:
        Room *location;
        int strength;
        string catName;
        bool clawsAreSharp;
        string arrayOfCollectibles[5];
        int meow;

    public:
        Cat();
        virtual ~Cat();

        void updateLocation(Room* currentLocation);
        string getLocation();

        void increaseCatStrength(int);
        void decreaseCatStrength();
        int getCatStrength();

        void setCatName(string);
        string getCatName();

        bool eatFoodFromPlate();

        void setClawsAreSharp();
        bool getClawsAreSharp();

        void addToArray(string newElement);
        bool doesCatHaveMouse();
        bool doesCatHaveHuman();

        int meowLoudly();

void getArray();


        void moveRight();
        void moveLeft();
        void moveUp();
        void moveDown();
};

#endif // CAT_H
