#include "furniture.hpp"

Furniture::Furniture()
{

}

Furniture::Furniture(string furnitureName)
{
    nameOfFuniture = furnitureName;
}

Furniture::~Furniture()
{

}


string Furniture::getFurnitureName()
{
    return nameOfFuniture;
}
