#include "controller.ih"

namespace
{
    string const NUMERIC_CHARS = "0123456789";
}

std::string Controller::prompt() const
{
    string input;
    cout << "Enter a number (0-99999): ";

    // Read the whole line into a string. If the user enters a non-valid
    // input, the corresponding if statement will return true and 
    // an exception will be thrown.
    if (getline(cin, input))
    {
        if (input.find_first_not_of(NUMERIC_CHARS) != std::string::npos)
        {
            throw runtime_error("Non integer input");
        }
        else if (input.size() > 5) // HARDCODE BAD
        {
            throw runtime_error("Input too large");
        }
        else if (input.empty())
        {
            throw runtime_error("Input was empty");
        }

    }

    
    // If reading the line fails, an exception is thrown as well.
    else
        throw runtime_error("Invalid input");

    return input;
}