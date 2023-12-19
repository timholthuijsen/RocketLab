#ifndef INCLUDED_CONTROLLER_H_
#define INCLUDED_CONTROLLER_H_

#include <string>

class Controller
{
  public:
    Controller() = default;
    ~Controller() = default;

    int run();

  private:
    std::string prompt() const;
};

#endif // INCLUDED_CONTROLLER_H_