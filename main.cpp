/*
    main.cpp

    Test file for GreatestCommonDivisor.cpp
*/

#include "GreatestCommonDivisor.hpp"
#include <iostream>

int main() {
    int number1 = 867829655;
    int number2 = 233091089;
    GreatestCommonDivisor divisor;

    std::cout << "Please enter the two (positive) numbers you wish to calculate the Greatest Common Denominator of: ";
    std::cin >> number1;
    std::cin >> number2;

    unsigned int gcd = divisor.gcd(number1, number2);

    std::cout << "The GCD of " << number1 << " and " << number2 << " is: " << gcd << ".\n";

    return 0;
}
