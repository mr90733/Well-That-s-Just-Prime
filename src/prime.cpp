
#include "prime.hpp"

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