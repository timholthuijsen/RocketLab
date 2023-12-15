#ifndef INCLUDED_CONTROLLER_H_
#define INCLUDED_CONTROLLER_H_



class Controller
{
    Prompter const d_prompter;

    public:
    Controller() = default;
    ~Controller() = default;

    int run();

  private:
    unsigned short reverse(unsigned short input) const;
    size_t power(std::string const &input) const;
};

#endif // INCLUDED_CONTROLLER_H_