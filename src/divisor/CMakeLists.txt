add_executable(divisor ./main.cpp)

add_executable(test_divisor ./tests/tests.cpp)
target_link_libraries(test_divisor PRIVATE Catch2::Catch2WithMain)


include(CTest)
include(Catch)
catch_discover_tests(test_divisor)