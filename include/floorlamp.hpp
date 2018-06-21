#ifndef FLOORLAMP_HPP
#define FLOORLAMP_HPP

#include <Furniture.hpp>


class FloorLamp : public Furniture
{
    protected:
        bool lightIsON;

    public:
        FloorLamp();
        virtual ~FloorLamp();


        void turnLightON();
        void turnLightOFF();
        bool getLightStatus();



};

#endif // FLOORLAMP_HPP
