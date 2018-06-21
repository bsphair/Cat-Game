#include "nightstand.hpp"

#include <stdlib.h>

NightStand::NightStand()
{
    nameOfFuniture = "Night Stand";
}

NightStand::~NightStand()
{
    //dtor
}




int NightStand::knockAlarmClockOffNightStand()
{
    int x = (rand()% 10) + 1;
    return x;
}
