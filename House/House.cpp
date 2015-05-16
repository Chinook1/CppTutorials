#include "House.h"


House::House()
{
    ;
}


/*
void House::setColor(string color)
{
    this->color = color;
}
*/
void House::setColor(string myColor)
{
    color = myColor;
}


string House::getColor()
{
    return color;
}


/*
void House::setNumOfWindows(int numOfWindows)
{
    this->numOfWindows = numOfWindows;
}
*/
void House::setNumOfWindows(int myNumOfWindows)
{
    numOfWindows = myNumOfWindows;
}

int House::getNumOfWindows()
{
    return numOfWindows;
}


House::~House()
{

}
