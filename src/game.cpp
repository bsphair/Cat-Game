/****************************************************************************************************************************
** File Name: game.cpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: contains the game play functions for the game
****************************************************************************************************************************/
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <limits>


#include "room.hpp"
#include "bathroom.hpp"
#include "bedroom.hpp"
#include "cat.hpp"
#include "dinningroom.hpp"
#include "foodcloset.hpp"
#include "kitchen.hpp"
#include "livingroom.hpp"
#include "patio.hpp"
#include "game.hpp"

using std::cin;
using std::cout;
using std::endl;


/****************************************************************************************************************************
** Function Name: beginningPrompt()
** Description: function will print the beginning story to screen.
** Parameters:NA
** Pre-Condition:NA
** Post-Condition:NA
****************************************************************************************************************************/
void beginningPrompt()
{
    cout << "After waking up from a deep sleep, you find yourself in the Patio room." << endl;
    cout << "You discover after napping for so long, you are now hungry. Also, due to" << endl;
    cout << "the windows being left open by the human, the room is cold. You know the" << endl;
    cout << "food is contained in the Food Closet room, however it requires the human" << endl;
    cout << "to gain entrance. You must find the human, get his attention, and make him" << endl;
    cout << "open the door to the Food Closet." << endl << endl;
}

/****************************************************************************************************************************
** Function Name: playInPatio(Cat*, Patio*)
** Description: Function contains the game play for the Patio class
** Parameters: Cat*, Patio*
** Pre-Condition: N/A
** Post-Condition: Dependent upon player
****************************************************************************************************************************/
string playInPatio(Cat* kitty, Patio* patio)
{
    int patioMenu;
    bool endLoop = false;

    while(!endLoop)
    {
        cout << "As you look around the room, you have several choices in what to do" << endl;
        cout << "1.) Look outside for any birds" << endl;
        cout << "2.) Paw the window shut" << endl;
        cout << "3.) Walk to the Dining Room" << endl;
        cout << "4.) Walk to the Kitchen room" << endl;
        cin >> patioMenu;

        switch(patioMenu)
        {
            case 1:
                {
                    if(patio->getAreThereBirdsOutside() == true)
                    {
                        cout << "You begin to carefully look out the window for any movements" << endl;
                        cout << "Nothing appears to be moving since it is dark outside. After" << endl;
                        cout << "a few minutes, you loose interest and move on." << endl << endl;
                    }
                }

                break;

            case 2:
                {
                    if(patio->getPatioWindows() == true)
                    {
                        patio->setPatioWindows(false);
                        cout << "The windows are now closed" << endl << endl;
                    }
                    else if(patio->getPatioWindows() == false)
                    {
                        cout << "The windows are already closed" << endl << endl;
                    }
                }
                break;

            case 3:
               {
                    kitty->moveRight();
                    cout << "You are now entering the " << kitty->getLocation() << ".";

                    endLoop = true;
               }

               break;

            case 4:
                {
                    kitty->moveUp();
                    cout << "You are now entering the " << kitty->getLocation() << ".";

                    endLoop = true;
                }

                break;

            default:
                cout << "Enter a 'y' for yes or 'n' for no"  << endl;

        }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return kitty->getLocation();
}

/****************************************************************************************************************************
** Function Name: playInDinningRoom(Cat*, DinningRoom*)
** Description: Function contains the game play for the DinningRoom class
** Parameters: Cat*, DinningRoom*
** Pre-Condition:NA
** Post-Condition: Dependent upon player
****************************************************************************************************************************/
string playInDinningRoom(Cat* kitty, DinningRoom* dinningRoom)
{
    cout << "The human doesn't spend too much time in the Dining room." << endl;
    cout << "Most of the time, the human is at the table eating various" << endl;
    cout << "foods from a plate. Sometimes, the human leaves a small" << endl;
    cout << "scrap of food on the table or even forgets to take the plate" << endl;
    cout << "into the Kitchen." << endl;

    bool mainLoop = false;
    int userChoice;

    while(!mainLoop)
    {
        cout << "1.) Look around the Dining Room for human" << endl;
        cout << "2.) Play with light cord until the lamp comes on" << endl;
        cout << "3.) Check table for scraps" << endl;
        cout << "4.) Walk to the Bathroom" << endl;
        cout << "5.) Walk to the Living Room" << endl;
        cout << "6.) Walk to the Patio" << endl;
        cin >> userChoice;

        switch(userChoice)
        {
            case 1:
                {
                    if(dinningRoom->getHasHuman() == true)
                    {
                        cout << "You found the human!" << endl;
                    }
                    else
                    {
                        cout << "The human is not here" << endl;
                    }
                }

                break;

            case 2:
                {
                    if(dinningRoom->getIsLampOn() == true)
                    {
                        cout << "The lamp is already on" << endl;
                    }
                    else{


                        bool loopCheck = false;
                        char x;

                        cout << "To play with the lamp cord, swing your paw and hook the cord (enter 's')" << endl;


                        while(!loopCheck)
                        {
                            cin >> x;
                            dinningRoom->updateLampStrength();

                            if(dinningRoom->getIsLampOn() == false)
                            {
                                switch(x)
                                {
                                    case 's':
                                        {
                                            cout << "The lamp is still off. Keep pawing at the cord" << endl;
                                        }
                                        break;

                                    default:
                                        {
                                            cout << "Press 's' to swing your paw" << endl;
                                        }
                                }
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }

                            else
                            {
                                cout << "The light is now on" << endl;
                                loopCheck = true;
                            }
                        }
                    }
                }
                break;

            case 3:
                    {
                        if(dinningRoom->checkIfPlateIsFullOrEmpty() == true)
                        {
                            cout << "You found some scraps! Your strength has now been increased" << endl;
                            cout << "by " << dinningRoom->getPlateNutrition() << " points" << endl;
                            kitty->increaseCatStrength(dinningRoom->emptyFoodPlate());
                        }
                        else if(dinningRoom->checkIfPlateIsFullOrEmpty() == false)
                        {
                            cout << "The plate is empty" << endl;
                        }
                    }
                    break;

            case 4:
                     {
                        kitty->moveRight();
                        cout << "You are now entering the " << kitty->getLocation() << "." << endl;
                        mainLoop = true;
                     }

                    break;

            case 5:
                    {
                        kitty->moveUp();
                        cout << "You are now entering the " << kitty->getLocation() << "." << endl;
                        mainLoop = true;
                    }

                    break;


            case 6:
                    {
                        kitty->moveLeft();
                        cout << "You are now entering the " << kitty->getLocation() << " room," << endl;
                        mainLoop = true;
                    }

                    break;

            default:
                    cout << "Enter an integer" << endl;


            }

                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return kitty->getLocation();
}



/****************************************************************************************************************************
** Function Name: playInBathRoom(Cat*, BathRoom*, BedRoom*)
** Description:Function contains the game play for the BathRoom class
** Parameters:Cat*, BathRoom*, BedRoom*
** Pre-Condition: NA
** Post-Condition:Dependent upon player
****************************************************************************************************************************/
string playInBathRoom(Cat* kitty, BathRoom* bathRoom, BedRoom* bedRoom)
{
    cout << "The human doesn't spend too much time in this room. He normally uses this room before heading to sleep" << endl;
    cout << "Sometimes he leaves the faucet on and you can catch a few drops of water." << endl;

    int userChoice;
    bool mainLoop = false;

    while(!mainLoop)
    {
        cout << "1.) Jump on the sink and see if the faucet is dripping" << endl;
        cout << "2.) Interact with the faucet" << endl;
        cout << "3.) Walk to the Dinning Room" << endl;
        cout << "4.) Walk to the Bedroom" << endl;
        cin >> userChoice;


        switch(userChoice)
        {

        case 1:
            {
                if(bathRoom->getFaucetIsDripping() == true)
                {
                    cout << "The faucet is dripping. The human must have used this room recently." << endl;
                }
                else if(bathRoom->getFaucetIsDripping() == false)
                {
                    cout << "The faucet is not dripping." << endl;
                }
            }
            break;


        case 2:
            {
                if(bathRoom->getFaucetIsDripping() == true)
                {
                    bathRoom->turnFaucetOff();
                    cout << "The faucet is now off." << endl;
                }
                else if(bathRoom->getFaucetIsDripping() == false)
                {
                    bathRoom->turnFaucetOn();
                    cout << "The faucet is now dripping." << endl;
                }
            }
            break;

        case 3:
            {
                kitty->moveLeft();
                mainLoop = true;
            }
            break;

        case 4:
            {
                if(bedRoom->getDoorStatus() == true)
                {
                    cout << "The door is locked. You must figure out another way in." << endl;
                }
                if(bedRoom->getDoorStatus() == false)
                {
                    kitty->moveUp();
                    mainLoop = true;
                }
            }
            break;

        default:
            cout << "Enter an integer" << endl;
        }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }


    return kitty->getLocation();
}



/****************************************************************************************************************************
** Function Name: playInLivingRoom(Cat*, LivingRoom*, BedRoom*)
** Description:Function contains the game play for the DinningRoom class
** Parameters: Cat*, LivingRoom*, BedRoom*
** Pre-Condition:N/A
** Post-Condition:Dependent upon player
****************************************************************************************************************************/
string playInLivingRoom(Cat* kitty, LivingRoom* livingRoom, BedRoom* bedRoom)
{
    cout << "The human spends a lot of time in this room. He enjoys sitting on the couch" << endl;
    cout << "and watching you play. Sometimes he has a toy with a feather on the end and " << endl;
    cout << "makes it fly around the room really fast. He also give you a few toys shaped" << endl;
    cout << "like mice. To get good at catching these toys, it helps to have sharp claws." << endl;

    int userChoice;
    bool mainLoop = false;

    while(!mainLoop)
    {
        cout << "1.) Sharpen claws on the scratching post" << endl;
        cout << "2.) Look around the room for a mouse toy" << endl;
        cout << "3.) Walk to the Bedroom" << endl;
        cout << "4.) Walk to the Dining Room" << endl;
        cout << "5.) Walk to the Kitchen" << endl;
        cin >> userChoice;

        switch(userChoice)
        {
            case 1:
                {
                    if(kitty->getClawsAreSharp() == true)
                    {
                        cout << "Your claws are already sharp" << endl;
                    }
                    else if(kitty->getClawsAreSharp() == false)
                    {
                        kitty->setClawsAreSharp();
                        cout << "Wow, your claws are sharp!" << endl;
                    }
                }
                break;


            case 2:
                {
                    if(livingRoom->getHasMouseToy() == false)
                    {
                        cout << "As you looked around the room, you didn't see any mouse toys" << endl << endl;
                        break;
                    }
                    else if(livingRoom->getHasMouseToy() == true && !kitty->doesCatHaveMouse())
                    {
                        livingRoom->changeMouseToy();
                        bool secondLoop = false;
                        int newOption;
                        cout << "You found a mouse toy!! Would you like to add it to your cat backpack?" << endl;
                        cout << "You never know when it will come in handy" << endl << endl;

                        while (!secondLoop)
                        {
                            cout << "1.) Add toy to your collection" << endl;
                            cout << "2.) Don't add toy to collection" << endl;
                            cin >> newOption;

                            switch(newOption)
                            {
                                case 1:
                                    {
                                        cout << "Mouse toy has been added to the collection" << endl << endl;
                                        kitty->addToArray(livingRoom->getMouseToyName());
                                        secondLoop = true;
                                    }
                                    break;

                                case 2:
                                    {secondLoop = true;}
                                    break;
                                default:
                                    cout << "Enter an integer" << endl;

                            }
                           // cin.clear();
                            //cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                }
                break;

            case 3:
                {
                    if(kitty->doesCatHaveMouse() == true)
                    {
                        kitty->moveRight();
                        mainLoop = true;
                    }
                    else if(kitty->doesCatHaveMouse() == false)
                    {
                        cout << "You don't have everything you need to unlock the Bedroom door. Go find the secret" << endl;
                        cout << "key to unlocking the door" << endl;
                    }
                }
                break;

            case 4:
                {
                    kitty->moveDown();
                    mainLoop = true;
                }
                break;

            case 5:
                {
                    kitty->moveLeft();
                    mainLoop = true;
                }
                break;

            default:
                cout << "Enter an integer" << endl;



        }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return kitty->getLocation();
}



/****************************************************************************************************************************
** Function Name: playInBedRoom(Cat*, BedRoom*)
** Description:Function contains the game play for the DinningRoom class
** Parameters: Cat*, BedRoom*
** Pre-Condition: NA
** Post-Condition:Dependent upon player
****************************************************************************************************************************/
string playInBedRoom(Cat* kitty, BedRoom* bedRoom)
{
    cout << "What's that? Do you hear it? It sounds like the human is in bed snoring. This can be problematic." << endl;
    cout << "The human is known to be a heavy sleeper. You may have to figure out a way to wake him up" << endl;

    bool mainLoop = false;

    while(!mainLoop)
    {
        int userChoise;
        cout << "1.) Meow to wake human up" << endl;
        cout << "2.) Knock over alarm clock on nightstand to make noise" << endl;
        cin >> userChoise;

        switch(userChoise)
        {
        case 1:
            {
                if(bedRoom->getHumanSleepStrength() > 0)
                {
                    cout << "Hmm, seems like he moved a little bit." << endl;
                    bedRoom->wakeHumanUp(kitty->meowLoudly());
                }
                else if(bedRoom->getHumanSleepStrength() <= 0)
                {
                    cout << "He is awake!!! Nice job!" << endl;
                    mainLoop = true;
                }
            }
            break;

        case 2:
            {
                if(bedRoom->getisAlarmClockOnNightStand() == false)
                {
                    cout << "You've already knocked over the alarm clock. Try meowing again" << endl;
                    break;
                }
                else{
                    if(bedRoom->getHumanSleepStrength() > 0)
                    {
                        cout << "Hmm, now is he moving around a little bit." << endl;
                        bedRoom->wakeHumanUp(kitty->meowLoudly());
                    }
                    else if(bedRoom->getHumanSleepStrength() <= 0)
                    {
                        cout << "He is awake!!! Nice job!" << endl;
                        mainLoop = true;
                    }
                    bedRoom->changeAlarmClockPosition();
                }

            }
            break;

        default:
            {cout << "Enter an integer" << endl;}
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }


    cout << "Now that you have found and awoken the human, lead him to the Food Closet. He will know to how unlock" << endl;
    cout << "the door and get you some chow" << endl;

    kitty->addToArray("Human");

    int secondChoice;
    bool anotherLoop = false;

    while(!anotherLoop)
    {
        cout << "1.) Walk to Living Room" << endl;
        cout << "2.) Walk to Bathroom" << endl;
        cin >> secondChoice;

        switch(secondChoice)
        {
        case 1:
            {
                kitty->moveLeft();
                anotherLoop = true;
            }
            break;

        case 2:
            {
                kitty->moveDown();
                anotherLoop = true;
            }
            break;

        default:
            cout << "Enter an integer" << endl;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return kitty->getLocation();
}


/****************************************************************************************************************************
** Function Name: playInKitchen(Cat*, Kitchen*, FoodCloset*)
** Description:Function contains the game play for the DinningRoom class
** Parameters:Cat*, Kitchen*, FoodCloset*
** Pre-Condition: N/A
** Post-Condition:Dependent upon player
****************************************************************************************************************************/
string playInKitchen(Cat* kitty, Kitchen* kitchen, FoodCloset* foodCloset)
{
    if(kitty->doesCatHaveHuman() == true)
    {
        int userChoice;
        bool firstLoop = false;
        bool secondLoop = false;

        while(!firstLoop)
        {
            cout << "So close! Now that you have the human, you can unlock the Food Closet so the human can feed you" << endl;
            cout << "1.) Use the human to unlock the Food Closet" << endl;
            cin >> userChoice;

            switch(userChoice)
            {
            case 1:
                {
                    foodCloset->unlockDoor();
                    firstLoop = true;
                }
                break;

            default:
                cout << "Enter an integer" << endl;
            }
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int anotherChoice;
        while(!secondLoop)
        {
            cout << "The door has been unlocked! Now the human can get your food!" << endl;
            cout << "1.) Walk into the Food Closet with the human" << endl;
            cin >> anotherChoice;

            switch(anotherChoice)
            {
            case 1:
                {
                    kitty->moveUp();
                    secondLoop = true;
                }
                break;
            default:
                cout << "Enter an integer" << endl;
            }
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }




    }

    else
    {
        int userChoice;
        bool mainLoop = false;

        cout << "The food is close, you can smell it" << endl << endl;
        cout << "You know the food is stored in the Food Closet but the door is currently locked." << endl;
        cout << "The only way to unlock the door is to have the human with you. The human is" << endl;
        cout << "nowhere to be found. Maybe you can check the cabinets for any cat treats." << endl;

        while(!mainLoop)
        {
            cout << "1.) Check cabinets for treats" << endl;
            cout << "2.) Walk to Living Room" << endl;
            cout << "3.) Walk to Patio" << endl;
            cin >> userChoice;

            switch(userChoice)
            {
            case 1:
                {
                    if(kitchen->isThereACatTreat() == true)
                    {
                        cout << "Yumm, you found a treat!" << endl;
                        kitchen->foundATreat();
                    }
                    else if(kitchen->isThereACatTreat() == false)
                    {
                        cout << "You didn't find any treats." << endl;
                    }
                }
                break;

            case 2:
                {
                    kitty->moveRight();
                    mainLoop = true;
                }
                break;

            case 3:
                {
                    kitty->moveDown();
                    mainLoop = true;
                }
                break;

            default:
                cout << "Enter an integer" << endl;
            }

            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

    }



    return kitty->getLocation();

}


/****************************************************************************************************************************
** Function Name: playInFoodCloset(Cat*, FoodCloset*)
** Description:Function contains the game play for the DinningRoom class
** Parameters:Cat*, FoodCloset*
** Pre-Condition:N/A
** Post-Condition:Dependent upon player
****************************************************************************************************************************/
string playInFoodCloset(Cat* kitty, FoodCloset* foodCloset)
{
    int userChoice;
    bool mainLoop = false;

    cout << "You've finally made it to the food closet!! It's been a long night. You had to search" << endl;
    cout << "for the human, wake him up, and lead him to the food closet. You've worked up a large" << endl;
    cout << "appetite and now get to feed on your victory (and delicious kibbles)" << endl;

    while(!mainLoop)
    {
        cout << "1.) Feed your ravenous hunger" << endl;
        cin >> userChoice;

        switch(userChoice)
        {
        case 1:
            {
                return "Game Over";
            }
            break;

        default:
            cout << "Enter an integer" << endl;
        }
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

return kitty->getLocation();
}


