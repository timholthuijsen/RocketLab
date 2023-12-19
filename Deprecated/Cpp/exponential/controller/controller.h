#ifndef INCLUDED_CONTROLLER_H_
#define INCLUDED_CONTROLLER_H_

#include "../prompter/prompter.h"

class Controller
{
    Prompter const d_prompter;

    public:
    Controller() = default;
    ~Controller() = default;

    int run();

  private:
    unsigned short reverse(unsigned short input) const;
};

#endif // INCLUDED_CONTROLLER_H_