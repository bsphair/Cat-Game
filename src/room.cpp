/****************************************************************************************************************************
** File Name: room.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: contains the function definitions of the abstract Room class
****************************************************************************************************************************/
#include "room.hpp"

/****************************************************************************************************************************
** Function Name: Room()
** Description: Constructor for the Room functions
** Parameters: N/A
** Pre-Condition: NA
** Post-Condition: NA
****************************************************************************************************************************/
Room::Room()
{

}

/****************************************************************************************************************************
** Function Name: Room(bool, string)
** Description: Stores input into variables and sets the pointers to NULL
** Parameters: 1 bool, 1 string
** Pre-Condition: NA
** Post-Condition: variable are now set to NULL or some input value
****************************************************************************************************************************/
Room::Room(bool isDoorLocked, string roomName)
{
    doorLocked = isDoorLocked;
    nameOfRoom = roomName;
    rightPointer = NULL;
    leftPointer = NULL;
    topPointer = NULL;
    bottomPointer = NULL;
}

/****************************************************************************************************************************
** Function Name: ~Room()
** Description: This deconstructor will deallocate any memory this class used
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Memory has been deallocated
****************************************************************************************************************************/
Room::~Room()
{

}


/****************************************************************************************************************************
** Function Name: getDoorStatus()
** Description: Returns the boolean variable doorLocked
** Parameters: N/A
** Pre-Condition: NA
** Post-Condition:NA
****************************************************************************************************************************/
bool Room::getDoorStatus()
{
    return doorLocked;
}


/****************************************************************************************************************************
** Function Name: unlockDoor()
** Description: Sets the boolean variable doorLocked to "false"
** Parameters:NA
** Pre-Condition: N/A
** Post-Condition: The variable is now set to false
****************************************************************************************************************************/
void Room::unlockDoor()
{
    doorLocked = false;
}


/****************************************************************************************************************************
** Function Name: lockDoor()
** Description: This function will change the boolean variable to true
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: The boolean variable is now set to true
****************************************************************************************************************************/
void Room::lockDoor()
{
    doorLocked = true;
}


/****************************************************************************************************************************
** Function Name: getRoomName()
** Description: Function will return what is stored in the string variable nameOfRoom
** Parameters:N/A
** Pre-Condition: N/A
** Post-Condition: String has been returned
****************************************************************************************************************************/
string Room::getRoomName()
{
    return nameOfRoom;
}


/****************************************************************************************************************************
** Function Name: getRightPointer()
** Description: This function will return the name of the room the pointer is pointing to
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: The name of the room has been returned
****************************************************************************************************************************/
string Room::getRightPointer()
{
    return rightPointer->nameOfRoom;
}



/****************************************************************************************************************************
** Function Name:
** Description:This function will return the name of the room the pointer is pointing to
** Parameters:NA
** Pre-Condition:NA
** Post-Condition:The name of the room has been returned
****************************************************************************************************************************/
string Room::getLeftPointer()
{
    return leftPointer->nameOfRoom;
}



/****************************************************************************************************************************
** Function Name:
** Description:This function will return the name of the room the pointer is pointing to
** Parameters:NA
** Pre-Condition:NA
** Post-Condition:The name of the room has been returned
****************************************************************************************************************************/
string Room::getTopPointer()
{
    return topPointer->nameOfRoom;
}



/****************************************************************************************************************************
** Function Name:
** Description:This function will return the name of the room the pointer is pointing to
** Parameters:NA
** Pre-Condition:NA
** Post-Condition:The name of the room has been returned
****************************************************************************************************************************/
string Room::getBottomPointer()
{
    return bottomPointer->nameOfRoom;
}


/****************************************************************************************************************************
** Function Name: getRightWall()
** Description: Function will return the pointer rightPointer
** Parameters: NA
** Pre-Condition:NA
** Post-Condition:Pointer has been returned
****************************************************************************************************************************/
Room* Room::getRightWall()
{
    return rightPointer;
}



/****************************************************************************************************************************
** Function Name: getLeftWall
** Description: Function will return the pointer leftPointer
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: Pointer has been returned
****************************************************************************************************************************/
Room* Room::getLeftWall()
{
    return leftPointer;
}



/****************************************************************************************************************************
** Function Name: getTopWall
** Description: Function will return the pointer topPointer
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: Pointer has been returned
****************************************************************************************************************************/
Room* Room::getTopWall()
{
    return topPointer;
}



/****************************************************************************************************************************
** Function Name: getBottomWall()
** Description: Funciton will return the pointer bottomPointer
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: Pointer has been returned
****************************************************************************************************************************/
Room* Room::getBottomWall()
{
    return bottomPointer;
}

/****************************************************************************************************************************
** Function Name: setHasHuman()
** Description: Function will set the variable hasHuman to true. This will represent if the human is contained within the class
** Parameters: NA
** Pre-Condition: NA
** Post-Condition: the variable is set to "true"
****************************************************************************************************************************/
void Room::setHasHuman()
{
    hasHuman = true;
}



/****************************************************************************************************************************
** Function Name: getHasHuman()
** Description: Function will return the boolean variable hasHuman.
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: The variable has been returned
****************************************************************************************************************************/
bool Room::getHasHuman()
{
    return hasHuman;
}
