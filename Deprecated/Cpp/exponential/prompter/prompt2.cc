#include "prompter.h"

#include <iostream>
#include <string>

namespace
{
    std::string const NUMERIC_CHARS = "0123456789";
}

// Second approach on the prompt function. This approach has the advantage
// that there will be no left over input in the stream. The disadvantage is
// some additional overhead with loading both in as a string, manually
// checking said string and converting it to a number. 

size_t Prompter::prompt() const
{
    std::string input;
    std::cout << "Enter a number (0-99999): ";

    // Read the whole line into a string. If the user enters a non-numeric
    // the second if statement will return true and an exception will be thrown.
    if (std::getline(std::cin, input))
        if (input.find_first_not_of(NUMERIC_CHARS) != std::string::npos)
            throw std::runtime_error("Invalid input");
    // If reading the line fails, an exception is thrown as well.
    else
        throw std::runtime_error("Invalid input");

    return stoul(input);
}
