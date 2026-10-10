#include<stdio.h> 
#include<stdlib.h>
#include<math.h>

int gcd(int a, int b){
    while(b != 0){
        int temp = b ;
        b = a%b;
        a=temp;
    }
    return a;
}


int main(){
    int arr[100], n, i, j ;
    printf("enter the no of numbers you want to add:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     
    }
    int result = arr[0];

    for(i=1;i<n;i++){
        result = gcd(result,arr[i]);
    
    if(result == 1) break;
    }

    printf("the gcd is:%d\n",result);
    return 0;}

    

    
