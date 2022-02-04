#include <list>



namespace Implementation
{
    using Implementation = int(int);

    int fibonacci_naive(int n) {
        if (n <= 1)
            return n;

        return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
    }

    
    
    std::list<unsigned int> fibonacciNumbers;
    int fibonacci_fast(int n) {
        

        return 0;
    }
}