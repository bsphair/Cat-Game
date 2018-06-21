/****************************************************************************************************************************
** File Name: livingroom.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the LivingRoom class
****************************************************************************************************************************/
#ifndef LIVINGROOM_H
#define LIVINGROOM_H

class BedRoom;
class Kitchen;
class DinningRoom;


class LivingRoom : public Room
{
    protected:
        bool hasMouseToy;
        string toy;

    public:
        LivingRoom();
        virtual ~LivingRoom();

        void setLivingRoomWalls(BedRoom*, Kitchen*, DinningRoom*);

        bool getHasMouseToy();
        string getMouseToyName();
        void changeMouseToy();



};

#endif // LIVINGROOM_H
