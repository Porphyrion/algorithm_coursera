#include <iostream>
#include "implementation.h"



int main() {
    Implementation::Implementation* imp = Implementation::gcd_naive;

    int a, b;
    std::cin >> a >> b;
    std::cout << imp(a, b) << std::endl;
    return 0;
}
