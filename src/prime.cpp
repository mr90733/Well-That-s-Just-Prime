#include "prime.hpp"

#include <string>

std::vector<int> Prime::PFactors(int value)
{
    std::vector<int> result;

    if (value <= 1)
        return result;

    for (int divisor = 2; divisor * divisor <= value; divisor++)
    {
        while (value % divisor == 0)
        {
            result.push_back(divisor);
            value /= divisor;
        }
    }

    if (value > 1)
        result.push_back(value);

    return result;
}

// Prime

bool Prime::isPrime(int value)
{
    if (value <= 1) return false;

    std::vector<int> factors = PFactors(value);

    return factors.size() == 1 && factors[0] == value;
}

// Composite

bool Prime::isComposite(int value)
{
    if (value <= 1) return false;

    return !isPrime(value);
}

// S.F

std::string Prime::reduce(int numerator, int denominator)

{
    std::vector<int> numFactors = PFactors(numerator);

    std::vector<int> denFactors = PFactors(denominator);

    for (auto& n : numFactors)
    {
        for (auto& d : denFactors)

        {
            if (n == d)

            {
                n = -1;

                d = -1;

                break;
            }
        }
    }

    int newNum = 1;

    int newDen = 1;

    for (auto x : numFactors)

        if (x != -1) newNum *= x;

    for (auto x : denFactors)

        if (x != -1) newDen *= x;

    if (newDen == 1)

        return std::to_string(newNum);

    return std::to_string(newNum) + "/" + std::to_string(newDen);
}