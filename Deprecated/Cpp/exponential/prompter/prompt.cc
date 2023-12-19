#include "prompter.h"

#include <iostream>
#include <string>

// The first approach to the input function. This approach has the advantage
// that it is very simple. The disadvantage is that if the user enters a
// non-numeric input, the stream will be in a bad state and some input
// might be left in the stream, causing unwanted behaviour in the future.

unsigned short Prompter::prompt() const
{
    unsigned short result;

    std::cout << "Enter a number (0-99999): ";

    std::cin >> result;

    // If the user enterns a non-numeric input, the stream will raise the
    // failbit. Throw an exception if this is the case.
    if (std::cin.fail())
        throw std::runtime_error("Invalid input");

    return result;
}