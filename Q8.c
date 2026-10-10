#include <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int main(){
    int n, k, count = 0, arr[2000];
    printf("enter the value of n and k\n");
    scanf("%d", &n);
    scanf("%d", &k);
    
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            arr[count++] = i;
            if(i != n / i){
                arr[count++] = n / i;
            }
        }



    }
    qsort(arr, count, sizeof(int), cmp);
    
    if(k <= count){
        printf("%d", arr[k - 1]);
    
    }
    else{
        printf("-1");
    }
    return 0;
}