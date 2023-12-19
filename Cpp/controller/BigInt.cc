#include <iostream>
#include <string>
#include <algorithm>

// Function to add two large integers represented as strings
std::string addLargeIntegers(const std::string& num1, const std::string& num2) {
    std::string result;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    // Perform addition digit by digit
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        result.push_back(digit + '0');

        i--;
        j--;
    }

    // Reverse the result string to get the correct addition
    std::reverse(result.begin(), result.end());
    return result;
}

// Function to multiply two large integers represented as strings
std::string multiplyLargeIntegers(const std::string& num1, const std::string& num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    std::string result(len1 + len2, '0');

    // Perform multiplication digit by digit
    for (int i = len1 - 1; i >= 0; --i) {
        int carry = 0;
        int digit1 = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; --j) {
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2 + carry + (result[i + j + 1] - '0');
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] += carry;
    }

    // Remove leading zeros
    size_t startPos = result.find_first_not_of('0');
    if (startPos != std::string::npos) {
        return result.substr(startPos);
    }

    return "0"; // Return "0" if the result is zero
}

// Function
