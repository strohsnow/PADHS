#include <iostream>
#include <limits>
#include <omp.h>

bool isPrime(int n) {
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return n >= 2;
}

int main() {
    auto start = omp_get_wtime();

    #pragma omp parallel for schedule(dynamic)
    for (int n = 1; n < std::numeric_limits<int>::max(); n++) {
        isPrime(n);
    }

    auto end = omp_get_wtime();

    std::cout << end - start << std::endl;

    return 0;
}