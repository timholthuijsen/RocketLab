#include "controller.h"


unsigned short Controller::reverse(unsigned short input) const
{
    unsigned short result = 0;

    while (input > 0)
    {
        result *= 10;
        result += input % 10;
        input /= 10;
    }

    return result;
}