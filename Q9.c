#include <stdio.h>

int is_prime(long long x) {


    if (x < 2) return 0;
    
    if (x == 2) return 1;

    if (x % 2 == 0) return 0;


    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }


    return 1;
}

long long next_prime(long long n) {
    if (n < 2) return 2;
    long long x = n + 1;
    while (!is_prime(x)) x++;
    return x;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;
    printf("%lld\n", next_prime(n));
    return 0;
}