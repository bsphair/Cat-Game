/****************************************************************************************************************************
** File Name: livingroom.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the LivingRoom class
****************************************************************************************************************************/
#include "room.hpp"
#include "bedroom.hpp"
#include "dinningroom.hpp"
#include "livingroom.hpp"
#include "kitchen.hpp"



/****************************************************************************************************************************
** Function Name:LivingRoom()
** Description: Constructor initializes LivingRoom class variables
****************************************************************************************************************************/
LivingRoom::LivingRoom()
{
    doorLocked = false;
    nameOfRoom = "Living Room";
    hasMouseToy = true;
    toy = "Mouse Toy";
}


/****************************************************************************************************************************
** Function Name:~LivingRoom()
** Description: Deconstructor will deallocate any memory used by the LivingRoom class
****************************************************************************************************************************/
LivingRoom::~LivingRoom()
{
    //dtor
}

/****************************************************************************************************************************
** Function Name:setLivingRoomWalls(BedRoom* bed, Kitchen* kit, DinningRoom* dinning)
** Description: The pointers are set to the adjacent wall pointers.
** Parameters: BedRoom* , Kitchen* , DinningRoom*
** Pre-Condition: The walls of the room were set to NULL
** Post-Condition: The room now has walls/connecting rooms
****************************************************************************************************************************/
void LivingRoom::setLivingRoomWalls(BedRoom* bed, Kitchen* kit, DinningRoom* dinning)
{
    rightPointer = bed;
    leftPointer = kit;
    bottomPointer = dinning;
}


/****************************************************************************************************************************
** Function Name:getHasMouseToy()
** Description: Function returns the boolean variable hasMouseToy
** Parameters: N/A
** Pre-Condition: NA
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool LivingRoom::getHasMouseToy()
{
    return hasMouseToy;
}



/****************************************************************************************************************************
** Function Name:getMouseToyName()
** Description: Function returns the string variable "toy"
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The variable has been returned
****************************************************************************************************************************/
string LivingRoom::getMouseToyName()
{
    return toy;
}

/****************************************************************************************************************************
** Function Name:changeMouseToy()
** Description: The variable hasMouseToy is set to false
** Parameters: N/A
** Pre-Condition: NA
** Post-Condition: The variable is set to false
****************************************************************************************************************************/
void LivingRoom::changeMouseToy()
{
    hasMouseToy = false;
}
