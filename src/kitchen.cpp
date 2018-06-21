/****************************************************************************************************************************
** File Name: kitchen.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the Kitchen class
****************************************************************************************************************************/
#include "room.hpp"
#include "kitchen.hpp"
#include "livingroom.hpp"
#include "foodcloset.hpp"
#include "patio.hpp"

#include <iostream>


/****************************************************************************************************************************
** Function Name: Kitchen()
** Description: Constructor for the Kitchen class. Initializes the variable
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Variables are now initialized
****************************************************************************************************************************/
Kitchen::Kitchen()
{
    doorLocked = false;
    nameOfRoom = "Kitchen";
    foodBowlIsEmpty = true;
    catTreat = true;
}

/****************************************************************************************************************************
** Function Name:~Kitchen()
** Description: Deconstructor will deallocate any memory used by the Kitchen class
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: Memory is deallocated
****************************************************************************************************************************/
Kitchen::~Kitchen()
{
    //dtor
}


/****************************************************************************************************************************
** Function Name: setKitchenWalls(LivingRoom*, FoodCloset*, Patio*)
** Description: Function will established the walls adjacent to the Kitchen class
** Parameters: LivingRoom*, FoodCloset*, Patio*
** Pre-Condition:NA
** Post-Condition: The pointers will store the adjacent room pointers
****************************************************************************************************************************/
void Kitchen::setKitchenWalls(LivingRoom* l, FoodCloset* f, Patio* p)
{
    rightPointer = l;
    topPointer= f;
    bottomPointer = p;
}


/****************************************************************************************************************************
** Function Name: getFoodBowlStatus()
** Description: Function will return the boolean variable foodBowlIsEmpty
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Boolean variable is returned
****************************************************************************************************************************/
bool Kitchen::getFoodBowlStatus()
{
    return foodBowlIsEmpty;
}


/****************************************************************************************************************************
** Function Name: changeFoodBowlStatus()
** Description: Boolean variable foodBowlIsEmpty is set to true
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Variable is now set to true
****************************************************************************************************************************/
void Kitchen::changeFoodBowlStatus()
{
    foodBowlIsEmpty = true;
}


/****************************************************************************************************************************
** Function Name: isThereACatTreat()
** Description: Function will return the boolean variable catTreat.
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Boolean variable has been returned
****************************************************************************************************************************/
bool Kitchen::isThereACatTreat()
{
    return catTreat;
}


/****************************************************************************************************************************
** Function Name: foundATreat()
** Description: Function will set the boolean variable catTreat to false
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The variable is now set to false
****************************************************************************************************************************/
void Kitchen::foundATreat()
{
    catTreat = false;
}




