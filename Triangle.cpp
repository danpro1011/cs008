#include <iostream>
#include "Triangle.h"
#include <iomanip>
using namespace std;

//function that chooses the value to be above 1 and below 39
//we can call this function in the constructor if a user chooses a value outside this range

int helper(int value, int minVal, int maxVal)
{
    if(value < minVal)
    {
        return minVal;
    }
    else if(value > maxVal)
    {
        value = maxVal;
    }

}

//constructor
Triangle::Triangle(int size, char border, char fill) : border('#'), fill('*') {
    if(size < 1)
    {
        size = 1;
    }
    else if(size > 39)
    {
        size = 39;
    }

    setBorder(border);
    setFill(fill);
}

//Member functions
int Triangle::getSize() const
{
    return size;
}

int Triangle::perimeter() const{
    return 3 * size;
}

double Triangle::area() const{
    return sqrt(3) / 4 * size * size;
}

void Triangle::grow() {
    if(size < 39)
    {
        size++;
    }
}

void Triangle::shrink()
{
    if(size > 1)
    {
        size--;
    }
}

void Triangle::setBorder(char newBorder)
{
    if()
}