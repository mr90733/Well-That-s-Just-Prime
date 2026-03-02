#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

TEST_CASE("Returns empty vector for 0")

{
    REQUIRE(Prime::PFactors(0).empty());

}

TEST_CASE("Returns single element for prime numbers")

{
    std::vector<int> result = Prime::PFactors(11);

    REQUIRE(result[0] == 11);
}

TEST_CASE("Returns correct factors for composite numbers")

{
    REQUIRE(Prime::PFactors(9)  == std::vector<int>{3,3});

    REQUIRE(Prime::PFactors(10) == std::vector<int>{2,5});

}

