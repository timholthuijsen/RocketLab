#include "powerstring.h"

PowerString &PowerString::operator=(std::string const &rhs)
{
    *this = PowerString{rhs}; // Assign the string value from rhs to the PowerString object
    return *this;
}
