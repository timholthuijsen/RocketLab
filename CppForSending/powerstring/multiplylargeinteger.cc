#include "powerstring.h"

using namespace std;


std::string PowerString::
    multiplyLargeIntegers(std::string const &num1, std::string const &num2)
{
    size_t len1 = num1.length();
    size_t len2 = num2.length();
    std::string result(len1 + len2, '0');

    // Perform multiplication digit by digit
    for (size_t idx1 = len1; idx1-- > 0; )
    {
        size_t carry = 0;
        size_t digit1 = num1[idx1] - '0';

        for (size_t idx2 = len2; idx2-- > 0; )
        {
            size_t digit2 = num2[idx2] - '0';
            size_t product = digit1 * digit2 + carry
                             + (result[idx1 + idx2 + 1] - '0');
            carry = product / 10;
            result[idx1 + idx2 + 1] = (product % 10) + '0';
        }
        result[idx1] += carry;
    }

    // Remove leading zeros
    size_t startPos = result.find_first_not_of('0');
    if (startPos != std::string::npos)
        return result.substr(startPos);

    return "0"; // Return "0" if the result is zero
}