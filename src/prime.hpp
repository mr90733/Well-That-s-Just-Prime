#pragma once

#include <vector>

#include <iostream>

class Prime

{
public:

    static std::vector<int> PFactors(int value);

    // Is It Prime?
    static bool isPrime(int value);

    // Is It Composite?
    static bool isComposite(int value);

    // Simplifying Fractions

    static std::string reduce(int numerator, int denominator);
};
