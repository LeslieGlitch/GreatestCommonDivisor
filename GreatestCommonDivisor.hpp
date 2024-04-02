/*
    GreatestCommonDivisor.hpp

    Header file for finding the greatest common divisor of two numbers
*/

#ifndef GREATESTCOMMONDIVISOR_HPP
#define GREATESTCOMMONDIVISOR_HPP

class GreatestCommonDivisor {
public:
    /// @brief Determines Greatest Common Divisor of two numbers
    /// @param n1 
    /// @param n2 
    /// @return GCD of n1 and n2
    unsigned int gcd(unsigned int n1, unsigned int n2);

private:
    /// @brief Swaps two values
    /// @param n1 
    /// @param n2 
    template <class T>
    void swap(T& n1, T& n2);

};

#endif