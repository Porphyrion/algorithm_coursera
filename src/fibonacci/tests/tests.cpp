#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/catch_test_macros.hpp>

#include "../Implementation.h"

#define CATCH_CONFIG_DEFAULT_REPORTER = "console";

TEST_CASE( "Naive algo testing") {
    REQUIRE( Implementation::fibonacci_naive(0) == 0 );
    REQUIRE( Implementation::fibonacci_naive(1) == 1 );
    REQUIRE( Implementation::fibonacci_naive(2) == 1 );
    REQUIRE( Implementation::fibonacci_naive(3) == 2 );
    REQUIRE( Implementation::fibonacci_naive(4) == 3 );
    REQUIRE( Implementation::fibonacci_naive(9) == 34 );
}

TEST_CASE( "Fast algo testing") {
    REQUIRE( Implementation::fibonacci_naive(0) == 0 );
    REQUIRE( Implementation::fibonacci_naive(1) == 1 );
    REQUIRE( Implementation::fibonacci_naive(2) == 1 );
    REQUIRE( Implementation::fibonacci_naive(3) == 2 );
    REQUIRE( Implementation::fibonacci_naive(4) == 3 );
    REQUIRE( Implementation::fibonacci_naive(9) == 34 );
}


TEST_CASE("Benchmarks fibonacci algo")
{
    BENCHMARK("Fibonacci 20") {
        return Implementation::fibonacci_naive(20);
    };

    BENCHMARK("Fibonacci 25") {
        return Implementation::fibonacci_naive(20);
    };

    BENCHMARK("Fibonacci 35") {
        return Implementation::fibonacci_naive(20);
    };

    BENCHMARK("Fibonacci 45") {
        return Implementation::fibonacci_naive(20);
    };
}


