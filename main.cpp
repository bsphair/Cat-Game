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

using std::cout;
using std::cin;
using std::endl;

int main()
{
    srand((int)(time(NULL)));


    Patio *patio = new Patio;
    DinningRoom *dinningRoom = new DinningRoom;
    Kitchen *kitchen = new Kitchen;
    BathRoom *bathRoom = new BathRoom;
    BedRoom *bedRoom = new BedRoom;
    LivingRoom *livingRoom = new LivingRoom;
    FoodCloset *foodCloset = new FoodCloset;

    Cat *kitty = new Cat;

    patio->setPatioWalls(dinningRoom, kitchen);
    dinningRoom->setDinningRoomWalls(bathRoom, patio, livingRoom);
    kitchen->setKitchenWalls(livingRoom, foodCloset, patio);
    bathRoom->setBathRoomWalls(dinningRoom, bedRoom);
    bedRoom->setBedRoomWalls(livingRoom, bathRoom);
    livingRoom->setLivingRoomWalls(bedRoom, kitchen, dinningRoom);
    foodCloset->setFoodClosetWalls(kitchen);

    string currentLocation;
    bool endLoop = false;
    bool mainLoop = false;
    bool secondLoop = false;
    cout << "Welcome to Brian Phair's Final Project" << endl << endl;



    while(!mainLoop)
    {
        int userChoice;

        while(!secondLoop)
        {
            cout << "1.) Play the game" << endl;
            cout << "2.) End the program" << endl;
            cin >> userChoice;

            switch(userChoice)
            {
            case 1:
                {

                beginningPrompt();

                kitty->updateLocation(patio);
                cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                currentLocation = playInPatio(kitty, patio);

                while(!endLoop)
                {
                    if(kitty->getCatStrength() > 0)
                    {
                        if(currentLocation == "Patio")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInPatio(kitty, patio);
                        }

                        else if(currentLocation == "Kitchen")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInKitchen(kitty, kitchen, foodCloset);
                        }

                        else if(currentLocation == "Living Room")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInLivingRoom(kitty, livingRoom, bedRoom);
                        }

                        else if(currentLocation == "Bedroom")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInBedRoom(kitty, bedRoom);
                        }

                        else if(currentLocation == "Bathroom")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInBathRoom(kitty, bathRoom, bedRoom);
                        }

                        else if(currentLocation == "Food Closet")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInFoodCloset(kitty, foodCloset);
                        }
                        else if(currentLocation == "Dinning Room")
                        {
                            cout << "You are currently in the " << kitty->getLocation() << "." << endl;
                            currentLocation = playInDinningRoom(kitty, dinningRoom);
                        }
                        else if(currentLocation == "Game Over")
                        {
                            cout << "The game is over. Thank you for playing!" << endl;
                            endLoop = true;
                        }
                        kitty->decreaseCatStrength();
                        }
                        else{
                            cout << "You're strength has run out. You must now go back to sleep and play again later." << endl;
                        }
                    }
                }
                break;

            case 2:
                {
                    mainLoop = true;
                    secondLoop = true;
                }
                break;

            default:
                cout << "Enter a valid integer" << endl;

            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            }


            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
    }

    delete patio;
    delete dinningRoom;
    delete kitchen;
    delete bathRoom;
    delete bedRoom;
    delete livingRoom;
    delete foodCloset;
    delete kitty;

    return 0;
}

