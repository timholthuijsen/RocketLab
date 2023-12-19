
#include "controller.ih"

namespace
{
    string const NUMERIC_CHARACTERS = "0123456789";
}


int Controller::run()
{

    // Catch any exceptions thrown by the prompter. If an exception is thrown,
    // print the error message and return 1 to indicate an error. This should
    // only happen when the input is invalid.
    string input;
    try 
    {
        input = prompt();
    } catch (runtime_error const &err)
    {
        cerr << err.what() << '\n';
        return 1;
    }

    string const reversed = string{input.rbegin(), input.rend()};;

    cout << input << '^' << reversed << " is "
         << PowerString(input, reversed)
         << '\n';

    return 0;
}