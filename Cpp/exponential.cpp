#include <iostream>
#include <cmath>

class NumberProcessor {
private:
    int A;
    int B;

public:
    void getInput() {
        std::cout << "Enter a number (0-99999): ";
        std::cin >> A;
        if (A < 0 || A > 99999) {
            std::cerr << "Invalid input. Please enter a number between 0 and 99999." << std::endl;
            exit(1);
        }
    }

    void reverseDigits() {
        int temp = A;
        B = 0;
        while (temp > 0) {
            B = B * 10 + temp % 10;
            temp /= 10;
        }
    }

    std::string calculatePower() {
        long long result = 1;
        for (int i = 0; i < B; ++i) {
            result *= A;
        }
        return std::to_string(result);
    }

    void printResult() {
        std::cout << "Result: " << A << "^" << B << " is\n" << calculatePower() << std::endl;
    }
};

int main() {
    NumberProcessor processor;
    processor.getInput();
    processor.reverseDigits();
    processor.printResult();

    return 0;
}