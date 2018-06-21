/****************************************************************************************************************************
** File Name: bathroom.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the BathRoom class
****************************************************************************************************************************/
#ifndef BATHROOM_H
#define BATHROOM_H

#include "room.hpp"

class BedRoom;
class DinningRoom;

class BathRoom : public Room
{
    protected:
        bool faucetIsDripping;


    public:
        BathRoom();
        virtual ~BathRoom();

        void setBathRoomWalls(DinningRoom*, BedRoom*);

        bool getFaucetIsDripping();
        void turnFaucetOff();
        void turnFaucetOn();




};

#endif // BATHROOM_H
