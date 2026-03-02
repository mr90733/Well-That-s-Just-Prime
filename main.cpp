#include <iostream>

#include "src/prime.hpp"


int main()

{
    int input;

    std::cout << "Enter a number: ";

    std::cin >> input;

    std::vector<int> factors = Prime::PFactors(input);

    std::cout << "[";

    for (size_t i = 0; i < factors.size(); ++i)

    {
        std::cout << factors[i];

        if (i + 1 < factors.size())

            std::cout << ",";
    }

    std::cout << "]";

    return 0;
}