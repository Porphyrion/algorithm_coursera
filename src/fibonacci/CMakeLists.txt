add_executable(fibonacci ./main.cpp)

add_executable(test_fibonacci ./tests/tests.cpp  ./Implementation.h)
target_link_libraries(test_fibonacci PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(test_fibonacci)