/****************************************************************************************************************************
** File Name: room.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the Room class
****************************************************************************************************************************/
#ifndef ROOM_H
#define ROOM_H

#include <string>

using std::string;

class Room
{
    protected:
        string nameOfRoom;
        bool doorLocked;
        Room *rightPointer;
        Room *leftPointer;
        Room *topPointer;
        Room *bottomPointer;
        bool hasHuman;

    public:
        Room();
        Room(bool, string);
        virtual ~Room() = 0;

        bool getDoorStatus();
        void unlockDoor();
        void lockDoor();

        virtual string getRoomName();

        virtual void setHasHuman();
        virtual bool getHasHuman();


        virtual string getRightPointer();
        virtual string getLeftPointer();
        virtual string getTopPointer();
        virtual string getBottomPointer();

        Room* getRightWall();
        Room* getLeftWall();
        Room* getTopWall();
        Room* getBottomWall();

};

#endif // ROOM_H
