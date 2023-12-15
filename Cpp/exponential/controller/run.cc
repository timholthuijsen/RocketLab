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
    unsigned short input;
    try 
    {
        input = d_prompter.prompt();
    } catch (std::runtime_error const &err) {
        std::cerr << err.what() << '\n';
        return 1;
    }

    unsigned short const reversed = reverse(input);

    std::cout << input << '^' << reversed << " is "
              << std::pow(input, reversed) << '\n';

    return 0;
}