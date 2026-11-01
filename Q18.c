#include <stdio.h>

void reverseSubsegment(int *arr, int start, int end) {



    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];




        arr[end] = temp;
        start++;
        end--;


    }
}

void printArray(const int *arr, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main(void) {
    int a1[] = {10, 20, 30, 40, 50, 60};
    reverseSubsegment(a1, 1, 4);
    printArray(a1, 6);

    int a2[] = {1, 2, 3, 4};

    reverseSubsegment(a2, 0, 3);
    

    
    printArray(a2, 4);

    int a3[] = {7};

    reverseSubsegment(a3, 0, 0);

    printArray(a3, 1);

    int a4[] = {1, 2, 3, 4, 5};


    reverseSubsegment(a4, 2, 4);
    
    printArray(a4, 5);

    int a5[] = {1, 2, 3, 4, 5};


    reverseSubsegment(a5, 0, 2);
    printArray(a5, 5);



    return 0;


}