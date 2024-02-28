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
Triangle 