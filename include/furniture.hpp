#ifndef FURNITURE_H
#define FURNITURE_H

#include <string>

using std::string;

class Furniture
{

    protected:
            string nameOfFuniture;

    public:
        Furniture();
        Furniture(string furnitureName);

        virtual ~Furniture();

        string getFurnitureName();



};

#endif // FURNITURE_H
