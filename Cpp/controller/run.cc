#include "controller.ih"

int Controller::run()

{

    // Catch any exceptions thrown by the prompter. If an exception is thrown,
    // print the error message and return 1 to indicate an error. This should
    // only happen when the input is invalid.
    string input;
    try 
    {
        input = prompt();
    } catch (runtime_error const &err) {
        cerr << err.what() << '\n';
        return 1;
    }

    string reversed = string{input.rbegin(), input.rend()};

    size_t A = stoul(input);
    size_t B = stoul(reversed);

    size_t C = A;
    for (size_t exp = 1; exp != B; ++exp)
        {
        cout << "lol" << C << A << '\n';
        C *= A;
        }

    cout << input << '^' << reversed << " is "
         << C
         << '\n';

    return 0;
}