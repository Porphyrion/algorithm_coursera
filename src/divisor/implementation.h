
#include <list>

namespace Implementation
{
    using Implementation = int(int, int);

    int gcd_naive(int a, int b) {
        int current_gcd = 1;
    
        for (int d = 2; d <= a && d <= b; d++) {
            if (a % d == 0 && b % d == 0) {
                if (d > current_gcd) {
                    current_gcd = d;
                }
            }
        return current_gcd;
        }
    }
}