/****************************************************************************************************************************
** File Name: bedroom.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the BedRoom class
****************************************************************************************************************************/
#include "room.hpp"
#include "bedroom.hpp"
#include "bathroom.hpp"
#include "livingroom.hpp"


/****************************************************************************************************************************
** Function Name:BedRoom()
** Description: Constructor will initialize the BedRoom class variables
** Parameters: N/A
** Pre-Condition: Variables have not been initialized
** Post-Condition: Variables have been initialized
****************************************************************************************************************************/
BedRoom::BedRoom()
{
    doorLocked = true;
    nameOfRoom = "Bedroom";
    hasHuman = true;
    humanAsleepStrength = 10;
    alarmClockIsOnNightStand = true;
}


/****************************************************************************************************************************
** Function Name:~BedRoom()
** Description: Deconstrcutor will deallocated any memory used by the BedRoom class
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Memory has now been deallocated
****************************************************************************************************************************/
BedRoom::~BedRoom()
{
    //dtor
}



/****************************************************************************************************************************
** Function Name:setBedRoomWalls(LivingRoom* living, BathRoom* bath)
** Description: Function will set the pointers to pointers to the adjacent rooms
** Parameters:LivingRoom* , BathRoom*
** Pre-Condition: N/A
** Post-Condition: Pointers are now set
****************************************************************************************************************************/
void BedRoom::setBedRoomWalls(LivingRoom* living, BathRoom* bath)
{
    leftPointer = living;
    bottomPointer = bath;
}



/****************************************************************************************************************************
** Function Name:wakeHumanUp(int)
** Description: Function will reduce the integer value stored in the variable humanAsleepStrength by the input stored in the
                variable meow
** Parameters:int
** Pre-Condition: humanAsleepStrength has a value of x
** Post-Condition: humanAsleepStrength has a value of x - meow
****************************************************************************************************************************/
void BedRoom::wakeHumanUp(int meow)
{
    humanAsleepStrength -= meow;
}


/****************************************************************************************************************************
** Function Name:getHumanSleepStrength()
** Description: Function will return the variable humanAsleepStrength
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The variable has been returned
****************************************************************************************************************************/
int BedRoom::getHumanSleepStrength()
{
    return humanAsleepStrength;
}


/****************************************************************************************************************************
** Function Name:getIsHumanAsleep()
** Description: Function will return the boolean variable isHumanIsAsleep
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool BedRoom::getIsHumanAsleep()
{
    return isHumanIsAsleep;
}



/****************************************************************************************************************************
** Function Name:getisAlarmClockOnNightStand()
** Description: Function will return the variable alarmClockIsOnNightStand
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: Variable has been returned
****************************************************************************************************************************/
bool BedRoom::getisAlarmClockOnNightStand()
{
    return alarmClockIsOnNightStand;
}


/****************************************************************************************************************************
** Function Name:changeAlarmClockPosition()
** Description: Function will decrease the variable humanAsleepStrength value by 5. This will act to wake the human up.
                The variable alarmClockIsOnNightStand will also be set to false which represents the clock being knocked on
                the floor
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Variables have been updatedq
****************************************************************************************************************************/
void BedRoom::changeAlarmClockPosition()
{
    humanAsleepStrength -=5;
    alarmClockIsOnNightStand = false;
}




