
#include <list>

namespace Implementation
{
    using Implementation = int(int);

    int fibonacci_naive(int n) {
        if (n <= 1)
            return n;

        return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
    }

    int fibonacci_fast(int n) {
        // write your code here

        return 0;
    }
}