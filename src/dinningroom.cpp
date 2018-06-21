/****************************************************************************************************************************
** File Name: dinningroom.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the DinningRoom class
****************************************************************************************************************************/
#include "room.hpp"
#include "dinningroom.hpp"
#include "bathroom.hpp"
#include "patio.hpp"
#include "livingroom.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;


/****************************************************************************************************************************
** Function Name: DinningRoom()
** Description: This constructor will initially define the variables
** Parameters: N/A
** Pre-Condition: Variables are not set to any values
** Post-Condition: Variable now store values
****************************************************************************************************************************/
DinningRoom::DinningRoom()
{
    doorLocked = false;
    hasHuman = false;
    nameOfRoom = "Dinning Room";
    plateOfFood = true;
    plateOfFoodNutrition = 10;
    lampIsOn = false;
    lampStrength = 4;
}


/****************************************************************************************************************************
** Function Name: ~DinningRoom()
** Description: This deconstructor will deallocate any used memory
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Memory is now deallocated
****************************************************************************************************************************/
DinningRoom::~DinningRoom()
{
    //dtor
}



/****************************************************************************************************************************
** Function Name: setDinningRoomWalls(Bathroom*, Patio*, LivingRoom*)
** Description: This function will link the adjacent rooms to the Dinning Room. Each pointer is pointing to an adjacent room.
** Parameters: 1 Bathroom pointer, 1 Patio pointer, 1 LivingRoom pointer
** Pre-Condition: N/A
** Post-Condition: The pointers are now pointing to the inputed room pointers. The Dinning room is now connected to the
                    adjacent rooms
****************************************************************************************************************************/
void DinningRoom::setDinningRoomWalls(BathRoom* b, Patio* p, LivingRoom* l)
{
    rightPointer = b;
    leftPointer = p;
    topPointer = l;
}


/****************************************************************************************************************************
** Function Name: checkIfPlateIsFullOrEmpty()
** Description: This function will return the boolean variable plateOfFood which is initially set to true. The variable will
                be "true" if the plate contains food and "false" if the plate does not contain food.
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The boolean variable has been returned
****************************************************************************************************************************/
bool DinningRoom::checkIfPlateIsFullOrEmpty()
{
    return plateOfFood;
}



/****************************************************************************************************************************
** Function Name: getPlateNutrition()
** Description: This function will return the variable plateOfFoodNutrition. This variable contains an integer variable
                that will go to restore part of the cat's health.
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The integer value stored in the variable has been returned.
****************************************************************************************************************************/
int DinningRoom::getPlateNutrition()
{
    return plateOfFoodNutrition;
}



/****************************************************************************************************************************
** Function Name: emptyFoodPlate()
** Description: This function will set the boolean variable plateOfFood to false and then return the integer stored in the
                variable plateOfFoodNutrition. This is functioning to act as if the cat is eating the food thus the plate
                is now empty. The returned value will go to restore part of the cat's strength.
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The boolean variable plateOfFood is now set to false and the integer value stored in plateOfFoodNutrition
                    has been returned.
****************************************************************************************************************************/
int DinningRoom::emptyFoodPlate()
{
   plateOfFood = false;
   return plateOfFoodNutrition;
}



/****************************************************************************************************************************
** Function Name: getHasHuman()
** Description: Function will return the boolean variable hasHuman
** Parameters: N/A
** Pre-Condition:N/A
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool DinningRoom::getHasHuman()
{
    return hasHuman;
}



/****************************************************************************************************************************
** Function Name:updateLampStrength()
** Description: Function will decrease the "strength" of the lamp. This will eventually result in the lamp "turning on"
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Lamp has reduced health and is closer to getting turned on
****************************************************************************************************************************/
void DinningRoom::updateLampStrength()
{
    if(lampStrength > 0)
    {
        lampStrength -= 2;
    }
    else if(lampStrength <= 0)
    {
        lampIsOn = true;
    }
}


/****************************************************************************************************************************
** Function Name:getIsLampOn()
** Description: Function returns the boolean variable lampIsOn
** Parameters: N/A
** Pre-Condition:N/A
** Post-Condition: Variable is returned
****************************************************************************************************************************/
bool DinningRoom::getIsLampOn()
{
    return lampIsOn;
}
