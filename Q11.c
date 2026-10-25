#include <stdio.h>


int main() {


    int n, i;


    long long x, result = 0;
    long long MOD = 1000000007;

    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        scanf("%lld", &x);



        result = (result + x) % MOD;
    }

    printf("%lld", result);


    return 0;
}
