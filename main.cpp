/*
    main.cpp

    Test file for GreatestCommonDivisor.cpp
*/

#include "GreatestCommonDivisor.hpp"
#include <iostream>
#include <limits>

int main() {
    unsigned int number1 = 867829655;
    unsigned int number2 = 233091089;
    bool exitFlag = false;
    GreatestCommonDivisor divisor;

    while (!exitFlag) {
        // Get numbers from user
        std::cout << "Please enter the two (positive) numbers you wish to"
            << " calculate the Greatest Common Denominator of: ";
        std::cin >> number1;
        std::cin >> number2;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Find GCD using class
        unsigned int gcd = divisor.gcd(number1, number2);
        std::cout << "The GCD of " << number1 << " and " << number2 << " is: " << gcd << ".\n";

        // Check exit conditions
        std::cout << "\nWould you like to check more numbers? [y/n]: ";
        char reply;
        std::cin >> reply;
        if (reply != 'y') {
            exitFlag = true;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
