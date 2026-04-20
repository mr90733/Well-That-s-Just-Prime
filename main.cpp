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

    std::cout << "]" << std::endl;

    // Add-ons

    std::cout << "Is Prime: " << Prime::isPrime(input) << std::endl;

    std::cout << "Is Composite: " << Prime::isComposite(input) << std::endl;

    std::cout << "Reduce 15/25: " << Prime::reduce(15, 25) << std::endl;

    std::cout << "Reduce 36/12: " << Prime::reduce(36, 12) << std::endl;

    return 0;
}