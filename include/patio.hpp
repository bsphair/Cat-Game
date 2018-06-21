/****************************************************************************************************************************
** File Name: patio.hpp
** Author: Brian Phair
** Date: March 21, 2017
** Description: Contains the function declarations of the Patio class
****************************************************************************************************************************/
#ifndef PATIO_H
#define PATIO_H

class DinningRoom;
class Kitchen;

class Patio : public Room
{
    protected:
        bool windowsAreOpen;
        bool areThereBirdsOutside;


    public:
        Patio();
        virtual ~Patio();

        void setPatioWalls(DinningRoom* d, Kitchen* k);

        void setPatioWindows(bool);
        bool getPatioWindows();

        bool getAreThereBirdsOutside();


};

#endif // PATIO_H
