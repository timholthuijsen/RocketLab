#include "controller.h"

#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>

int Controller::run()
{

    // Catch any exceptions thrown by the prompter. If an exception is thrown,
    // print the error message and return 1 to indicate an error. This should
    // only happen when the input is invalid.
    std::string input;
    try 
    {
        std::string input = prompt();
    } catch (std::runtime_error const &err) {
        std::cerr << err.what() << '\n';
        return 1;
    }

    std::string const reversed = std::string{input.rcbegin(), input.rcend()};;

    std::cout << input << '^' << reversed << " is "
              << static_cast<size_t>(std::pow(stoul(input), stoul(rev)))
              << '\n';

    return 0;
}