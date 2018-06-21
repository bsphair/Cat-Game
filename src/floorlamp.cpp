#include "floorlamp.hpp"

FloorLamp::FloorLamp()
{
    nameOfFuniture = "Floor Lamp";
    lightIsON = false;
}

FloorLamp::~FloorLamp()
{

}

void FloorLamp::turnLightON()
{
    lightIsON = true;
}

void FloorLamp::turnLightOFF()
{
    lightIsON = false;
}

bool FloorLamp::getLightStatus()
{
    return lightIsON;
}
