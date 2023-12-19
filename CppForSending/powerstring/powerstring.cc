#include "powerstring.h"

using namespace std;

#include <iostream>

PowerString::PowerString(std::string const &lhs, std::string const &rhs)
: std::string("1")
{
    cout << "String: " << rhs << '\n';
    size_t exp = stoul(rhs);
    for (size_t pow = 0; pow < exp; ++pow)
    {
        *this = multiplyLargeIntegers(*this, lhs);
    }
}