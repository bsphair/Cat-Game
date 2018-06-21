/****************************************************************************************************************************
** File Name: game.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the game
****************************************************************************************************************************/
#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED


using std::string;

void beginningPrompt();

string playInPatio(Cat* kitty, Patio* patio);

string playInDinningRoom(Cat* kitty, DinningRoom* dinningRoom);

string playInBathRoom(Cat* kitty, BathRoom* bathRoom, BedRoom* bedRoom);

string playInLivingRoom(Cat* kitty, LivingRoom* livingRoom, BedRoom* bedRoom);

string playInBedRoom(Cat* kitty, BedRoom* bedRoom);

string playInKitchen(Cat* kitty, Kitchen* kitchen, FoodCloset* foodCloset);

string playInFoodCloset(Cat* kitty, FoodCloset* foodCloset);

#endif // GAME_HPP_INCLUDED
