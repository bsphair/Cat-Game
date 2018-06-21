/****************************************************************************************************************************
** File Name: cat.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function definitions of the Cat class
****************************************************************************************************************************/
#include "room.hpp"
#include "bathroom.hpp"
#include "bedroom.hpp"
#include "cat.hpp"
#include "dinningroom.hpp"
#include "foodcloset.hpp"
#include "kitchen.hpp"
#include "livingroom.hpp"
#include "patio.hpp"



#include <iostream>
#include <string>

using std::string;



/****************************************************************************************************************************
** Function Name: Cat()
** Description: Constructor will initialize the Cat class variables
** Parameters: N/A
** Pre-Condition: Variables have not been initialized
** Post-Condition: Variable are now initialized
****************************************************************************************************************************/
Cat::Cat()
{
    strength = 100;
    catName = "";
    clawsAreSharp = false;
    meow = 5;
}




/****************************************************************************************************************************
** Function Name: ~Cat()
** Description: Deconstructor will deallocate any memory used by the Cat class
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: Memory is now deallocated
****************************************************************************************************************************/
Cat::~Cat()
{
    //dtor
}



/****************************************************************************************************************************
** Function Name: updateLocation(Room*)
** Description: Function will set the current location of the cat
** Parameters: Pointer to Room
** Pre-Condition: NA
** Post-Condition: The Cat's current location is set
****************************************************************************************************************************/
void Cat::updateLocation(Room* currentLocation)
{
    location = currentLocation;
}


/****************************************************************************************************************************
** Function Name: getLocation()
** Description: Function will return the name of the room that the cat is currently in
** Parameters:NA
** Pre-Condition:NA
** Post-Condition: Room name is returned
****************************************************************************************************************************/
string Cat::getLocation()
{
    return location->getRoomName();
}



/****************************************************************************************************************************
** Function Name: setClawsAreSharp()
** Description: This function will set the cat's claws to sharp
** Parameters: N/A
** Pre-Condition: The cat's claws are not sharp
** Post-Condition: The cat's claws are now sharp
****************************************************************************************************************************/
void Cat::setClawsAreSharp()
{
    clawsAreSharp = true;
}


/****************************************************************************************************************************
** Function Name: getClawsAreSharp()
** Description: This function will return the boolean variable clawsAreSharp
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: N/A
****************************************************************************************************************************/
bool Cat::getClawsAreSharp()
{
    return clawsAreSharp;
}

/****************************************************************************************************************************
** Function Name: setCatName(string)
** Description: Will set the name of the cat. The function will take a string input variable and store it in the variable
                that represents the cat's name.
** Parameters: one string
** Pre-Condition: The variable 'name' is set to ""
** Post-Condition: The variable 'name' is set to the input catName
****************************************************************************************************************************/
void Cat::setCatName(string name)
{
    catName = name;
}

/****************************************************************************************************************************
** Function Name: getCatName()
** Description: Will return the name of the cat
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The cat name has been returned
****************************************************************************************************************************/
string Cat::getCatName()
{
    return catName;
}


/****************************************************************************************************************************
** Function Name: moveRight()
** Description: Will move the cat to the room on the right.
** Parameters: N/A
** Pre-Condition: The cat is in place x
** Post-Condition: The cat is now moved to the right room of place x
****************************************************************************************************************************/
void Cat::moveRight()
{
    location = location->getRightWall();
}


/****************************************************************************************************************************
** Function Name: moveRight()
** Description: Will move the cat to the room on the right.
** Parameters: N/A
** Pre-Condition: The cat is in place x
** Post-Condition: The cat is now moved to the right room of place x
****************************************************************************************************************************/
void Cat::moveLeft()
{
    location = location->getLeftWall();
}


/****************************************************************************************************************************
** Function Name: moveRight()
** Description: Will move the cat to the room on the right.
** Parameters: N/A
** Pre-Condition: The cat is in place x
** Post-Condition: The cat is now moved to the right room of place x
****************************************************************************************************************************/
void Cat::moveUp()
{
    location = location->getTopWall();
}

/****************************************************************************************************************************
** Function Name: moveRight()
** Description: Will move the cat to the room on the right.
** Parameters: N/A
** Pre-Condition: The cat is in place x
** Post-Condition: The cat is now moved to the right room of place x
****************************************************************************************************************************/
void Cat::moveDown()
{
    location = location->getBottomWall();
}

/****************************************************************************************************************************
** Function Name: increaseCatStrength()
** Description: Will increase the cat's strength by the input value.
** Parameters: N/A
** Pre-Condition: The cat will have a strength of x
** Post-Condition: The cat will have a strength of x + (whatever value is stored in increaseInStrength)
****************************************************************************************************************************/
void Cat::increaseCatStrength(int increaseInStrength)
{
    strength += increaseInStrength;
}

/****************************************************************************************************************************
** Function Name: updateCatStrength()
** Description: Will decrease the cat's strength by a value of 5.
** Parameters: N/A
** Pre-Condition: The cat will have a strength of x
** Post-Condition: The cat will have a strength of x - 5
****************************************************************************************************************************/
void Cat::decreaseCatStrength()
{
    strength -= 5;
}


/****************************************************************************************************************************
** Function Name: getCatStrength()
** Description: Will return the strength of the cat.
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: The cat's strength has been returned
****************************************************************************************************************************/
int Cat::getCatStrength()
{
    return strength;
}



/****************************************************************************************************************************
** Function Name:eatFoodFromPlate()
** Description: Returns false
** Parameters:NA
** Pre-Condition:NA
** Post-Condition:NA
****************************************************************************************************************************/
bool Cat::eatFoodFromPlate()
{
    return false;
}


/****************************************************************************************************************************
** Function Name:addToArray(string)
** Description: The inputed string will be added to the array
** Parameters: 1 string
** Pre-Condition: The array will contain x elements
** Post-Condition: The array will now contain x + 1 elements
****************************************************************************************************************************/
void Cat::addToArray(string newElement)
{
    for(int x = 0; x < 5; x++)
    {
        if(arrayOfCollectibles[x] == "")
        {
            arrayOfCollectibles[x] = newElement;
            break;
        }
    }
}


/****************************************************************************************************************************
** Function Name: getArray()
** Description: Function will print out the array
** Parameters: NA
** Pre-Condition:NA
** Post-Condition: the array is printed to the screen
****************************************************************************************************************************/
void Cat::getArray()
{
    for(int x = 0; x < 5; x++)
    {
       std::cout<<  arrayOfCollectibles[x] << std::endl;
    }
}



/****************************************************************************************************************************
** Function Name: doesCatHaveMouse()
** Description: Function will loop through the array to find if the string "Mouse Toy" is contained. If so, the cat possess
                a "mouse".
** Parameters: N/A
** Pre-Condition: N/A
** Post-Condition: If the array contains a mouse, then "Found a mouse" is printed to the screen
****************************************************************************************************************************/
bool Cat::doesCatHaveMouse()
{
    for(int x = 0; x < 5; x++)
    {
        if(arrayOfCollectibles[x] == "Mouse Toy")
        {
            std::cout << "Found a mouse" << std::endl;
            return true;
        }
    }

    return false;
}


/****************************************************************************************************************************
** Function Name: doesCatHaveHuman()
** Description: Function will loop through the array to see if the cat possesses a human. If so, the function will return true
** Parameters: NA
** Pre-Condition:NA
** Post-Condition:NA
****************************************************************************************************************************/
bool Cat::doesCatHaveHuman()
{
    for(int x = 0; x < 5; x++)
    {
        if(arrayOfCollectibles[x] == "Human")
        {
            return true;
        }
    }

    return false;
}


/****************************************************************************************************************************
** Function Name:meowLoudly()
** Description: Function will return the integer value stored in the variable "meow". This will act as the cat's meow
** Parameters:NA
** Pre-Condition:NA
** Post-Condition: The integer value stored in "meow" has been returned
****************************************************************************************************************************/
int Cat::meowLoudly()
{
    return meow;
}


/****************************************************************************************************************************
** Function Name:
** Author:
** Date:
** Description:
****************************************************************************************************************************/



