/****************************************************************************************************************************
** File Name: patio.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the Patio class
****************************************************************************************************************************/
#include "room.hpp"
#include "patio.hpp"
#include "dinningroom.hpp"
#include "kitchen.hpp"


/****************************************************************************************************************************
** Function Name:Patio()
** Description: Constructor initializes all the variables for the Patio class
** Parameters: N/A
** Pre-Condition:N/A
** Post-Condition: Variables have been initialized
****************************************************************************************************************************/
Patio::Patio()
{
    doorLocked = false;
    nameOfRoom = "Patio";
    leftPointer = NULL;
    bottomPointer = NULL;
    windowsAreOpen = true;
    areThereBirdsOutside = true;
}

/****************************************************************************************************************************
** Function Name:setPatioWalls(DinningRoom *d, Kitchen *k)
** Description: Function sets the pointers to the adjacent room pointers.
** Parameters:DinningRoom *, Kitchen *
** Pre-Condition: N/A
** Post-Condition: The adjacent rooms have been set
****************************************************************************************************************************/
void Patio::setPatioWalls(DinningRoom *d, Kitchen *k)
{
    rightPointer = d;
    topPointer = k;
}


/****************************************************************************************************************************
** Function Name:~Patio()
** Description: Deconstructor will deallocated any memory used by the Patio class
** Parameters: N/A
** Pre-Condition:N/A
** Post-Condition: Memory has been deallocated
****************************************************************************************************************************/
Patio::~Patio()
{
    //dtor
}

/****************************************************************************************************************************
** Function Name:setPatioWindows(bool windows)
** Description: The boolean variable windowAreOpen will be set to the input value (true or false)
** Parameters: bool
** Pre-Condition: N/A
** Post-Condition: The variable will be set to the input
****************************************************************************************************************************/
void Patio::setPatioWindows(bool windows)
{
    windowsAreOpen = windows;
}



/****************************************************************************************************************************
** Function Name:getPatioWindows()
** Description: Function will return the boolean variable windowsAreOpen
** Parameters:N/A
** Pre-Condition:N/A
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool Patio::getPatioWindows()
{
    return windowsAreOpen;
}



/****************************************************************************************************************************
** Function Name:getAreThereBirdsOutside()
** Description: Function will return the boolean variable areThereBirdsOutside
** Parameters: N/A
** Pre-Condition:N/A
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool Patio::getAreThereBirdsOutside()
{
    return areThereBirdsOutside;
}

