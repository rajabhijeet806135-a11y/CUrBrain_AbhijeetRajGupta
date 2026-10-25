#include<stdio.h>


int main() {
    int n, i, k = 0;


    long long threshold, x;




    long long arr[100000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%lld", &arr[i]);


    }

    scanf("%lld", &threshold);

    printf("[");
    for (i = 0; i < n; i++) {
        if (arr[i] >= threshold) {

            if (k > 0) {
                printf(", ");
            }
            printf("%lld", arr[i]);
            k++;
        }
    }
    printf("]");
    

    return 0;
}