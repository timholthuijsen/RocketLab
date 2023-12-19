#ifndef INDLUDED_POWERSTRING_H_
#define INDLUDED_POWERSTRING_H_


#include <string>

class PowerString: public std::string
{

  public:
    PowerString(std::string const &lhs, std::string const &rhs);
    PowerString(std::string const &str);

    PowerString &operator=(std::string const &rhs);

  private:
    static std::string multiplyLargeIntegers(std::string const &num1, std::string const &num2);

};


inline PowerString::PowerString(std::string const &str)
: std::string{str}
{}


#endif // INDLUDED_POWERSTRING_H_