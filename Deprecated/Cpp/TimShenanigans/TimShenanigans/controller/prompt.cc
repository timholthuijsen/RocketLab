#include "controller.h"

#include <string>

std::string Controller::prompt() const
{
    std::string input;
    std::cout << "Enter a number (0-99999): ";

    // Read the whole line into a string. If the user enters a non-numeric
    // the second if statement will return true and an exception will be thrown.
    if (std::getline(std::cin, input))
        if (input.find_first_not_of(NUMERIC_CHARS) != std::string::npos)
            throw std::runtime_error("Non integer input");
        else if (input.size() > 5) // HARDCODE BAD
            throw std::runtime_error("Input too large");
    // If reading the line fails, an exception is thrown as well.
    else
        throw std::runtime_error("Invalid input");

    return input;
}