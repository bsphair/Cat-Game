/****************************************************************************************************************************
** File Name: bedroom.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the BedRoom class
****************************************************************************************************************************/
#ifndef BEDROOM_H
#define BEDROOM_H

class LivingRoom;
class BathRoom;

class BedRoom : public Room
{
    protected:
        bool isHumanIsAsleep;
        int humanAsleepStrength;
        bool alarmClockIsOnNightStand;


    public:
        BedRoom();
        virtual ~BedRoom();

        void setBedRoomWalls(LivingRoom* , BathRoom*);

        bool getIsHumanAsleep();
        void wakeHumanUp(int);
        int getHumanSleepStrength();


        bool getisAlarmClockOnNightStand();
        void changeAlarmClockPosition();


};

#endif // BEDROOM_H
