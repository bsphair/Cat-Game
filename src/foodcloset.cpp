/****************************************************************************************************************************
** File Name: foodcloset.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the FoodCloset class
****************************************************************************************************************************/
#include "room.hpp"
#include "foodcloset.hpp"
#include "kitchen.hpp"


/****************************************************************************************************************************
** Function Name:FoodCloset()
** Description: Constructor will initialize the FoodCloset variables
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variables are initialized
****************************************************************************************************************************/
FoodCloset::FoodCloset()
{
    doorLocked = true;
    nameOfRoom = "Food Closet";
    hasFoodBag = true;
}


/****************************************************************************************************************************
** Function Name:~FoodCloset()
** Description: Decnstructor will deallocate memory used by the FoodCloset class
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Memory has been deallocated
****************************************************************************************************************************/
FoodCloset::~FoodCloset()
{
    //dtor
}


/****************************************************************************************************************************
** Function Name:setFoodClosetWalls(Kitchen *k)
** Description: The walls adjacent to the FoodCloset are set
** Parameters: Kitchen
** Pre-Condition: NA
** Post-Condition: The walls adjacent to the FoodCloset are set
****************************************************************************************************************************/
void FoodCloset::setFoodClosetWalls(Kitchen *k)
{
    bottomPointer = k;
}

/****************************************************************************************************************************
** Function Name:lookForFoodBag()
** Description: The boolean variable hasFoodBag is returned
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: The variable has been returned
****************************************************************************************************************************/
bool FoodCloset::lookForFoodBag()
{
    return hasFoodBag;
}
