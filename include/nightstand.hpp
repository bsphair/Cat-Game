#ifndef NIGHTSTAND_H
#define NIGHTSTAND_H

#include <Furniture.hpp>


class NightStand : public Furniture
{
    public:
        NightStand();
        ~NightStand();

        int knockAlarmClockOffNightStand();

    protected:

    private:
};

#endif // NIGHTSTAND_H
