#include <iostream>
#include <cmath>

// Class NumberProcessor definition
class NumberProcessor {
private:
    int A;  // Variable to store the original number
    int B;  // Variable to store the reversed digits of the original number

public:
    // Function to get user input
    void getInput() {
        std::cout << "Enter a number (0-99999): ";
        std::cin >> A;
        // Check if input is within the valid range
        if (A < 0 || A > 99999) {
            std::cerr << "Invalid input. Please enter a number between 0 and 99999." << std::endl;
            exit(1);  // Exit program with an error code if input is invalid
        }
    }

    // Function to reverse the digits of the number
    void reverseDigits() {
        int temp = A;
        B = 0;
        // Reversing the digits of the number
        while (temp > 0) {
            B = B * 10 + temp % 10;
            temp /= 10;
        }
    }

    // Function to calculate the power of the original number raised to the reversed digits
    std::string calculatePower() {
        long long result = 1;
        // Calculating power using a loop
        for (int i = 0; i < B; ++i) {
            result *= A;
        }
        return std::to_string(result);  // Convert the result to a string for output
    }

    // Function to print the result of the power calculation
    void printResult() {
        std::cout << "Result: " << A << "^" << B << " is\n" << calculatePower() << std::endl;
    }
};

// Main function
int main() {
    NumberProcessor processor;  // Create an instance of the NumberProcessor class
    processor.getInput();       // Get user input
    processor.reverseDigits();  // Reverse the digits of the number
    processor.printResult();    // Print the result of the power calculation

    return 0;  // Return 0 to indicate successful program execution
}