/*
    GreatestCommonDivisor.cpp

    Implementation file for finding the greatest common divisor of two numbers
*/


#include "GreatestCommonDivisor.hpp"
#include <cmath>

/// @brief Determines Greatest Common Divisor of two numbers using Stein's Algorithm
/// @param n1 
/// @param n2 
/// @return GCD of n1 and n2
unsigned int GreatestCommonDivisor::gcd(unsigned int n1, unsigned int n2) {
    // Case: n = 0
    if (n1 == 0) return n2;
    if (n2 == 0) return n1;

    // Case: n1 = n2
    if (n1 == n2) return n1;

    // Case: Both even
    if ((n1 & 1) == 0 && (n2 & 1) == 0)
        return gcd(n1 >> 1, n2 >> 1) << 1;

    // Case: n1 even, n2 odd
    if ((n1 & 1) == 0)
        return gcd(n1 >> 1, n2);
    
    // Case: n1 odd, n2 even
    if ((n2 & 1) == 0)
        return gcd(n1, n2 >> 1);

    // Case: n1 > n2
    if (n1 > n2)
        return gcd((n1 - n2) >> 1, n2);
    
    // Case: n1 < n2
    return gcd(n1, (n2 - n1) >> 1);
}