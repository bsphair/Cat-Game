/****************************************************************************************************************************
** File Name: bathroom.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions for the BathRoom class
****************************************************************************************************************************/
#include "bathroom.hpp"
#include "dinningroom.hpp"
#include "bedroom.hpp"

/****************************************************************************************************************************
** Function Name: BathRoom()
** Description: The variables for the BathRoom class are now set
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variables are set
****************************************************************************************************************************/
BathRoom::BathRoom()
{
    doorLocked = false;
    nameOfRoom = "Bathroom";
    faucetIsDripping = true;
}


/****************************************************************************************************************************
** Function Name: ~BathRoom()
** Description: Deconstructor will deallocate any memory used by the class BathRoom
** Parameters: NA
** Pre-Condition: N/A
** Post-Condition: Memory has been deallocated
****************************************************************************************************************************/
BathRoom::~BathRoom()
{
    //dtor
}


/****************************************************************************************************************************
** Function Name: setBathRoomWalls(DinningRoom* dinning, BedRoom* bed)
** Description: Function will set the pointers to the adjacent rooms. If an adjacent room do not exist, the pointer will remain
                NULL
** Parameters: DinningRoom* , BedRoom*
** Pre-Condition: NA
** Post-Condition: Pointers are now set to the pointers to the adjacent rooms
****************************************************************************************************************************/
void BathRoom::setBathRoomWalls(DinningRoom* dinning, BedRoom* bed)
{
    leftPointer = dinning;
    topPointer = bed;
}


/****************************************************************************************************************************
** Function Name:getFaucetIsDripping()
** Description: Returns the boolean variable faucetIsDripping.
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: The variable is returned
****************************************************************************************************************************/
bool BathRoom::getFaucetIsDripping()
{
    return faucetIsDripping;
}


/****************************************************************************************************************************
** Function Name:turnFaucetOff()
** Description: The function sets the boolean variable to false
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variable is set to false
****************************************************************************************************************************/
void BathRoom::turnFaucetOff()
{
    faucetIsDripping = false;
}


/****************************************************************************************************************************
** Function Name:turnFaucetOn()
** Description: The variable is set to true
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variable is set to true
****************************************************************************************************************************/
void BathRoom::turnFaucetOn()
{
    faucetIsDripping = true;
}
