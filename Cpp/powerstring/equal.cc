#include "powerstring.h"

PowerString &PowerString::operator=(std::string const &rhs)
{
    *this = PowerString{rhs};
    return *this;
}
