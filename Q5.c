#include<stdio.h>
#include<stdlib.h>

int evenzero(int n, int arr[]){
    int temp =n,j,count = 0;
    temp=n;
  do{
        j=temp%10;
        temp=temp/10;
        if(j%2==0){
            j=0;
        }
        arr[count++] = j;
    }
        
        
     while(temp!=0);
    for(int a = 0, b = count - 1; a < b; a++, b--){
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }

    return count;             
}

int main(){
    int n;
    int arr[20];

    printf("enter the number :");
    scanf("%d",&n);
    if(n <= 0){
        printf("invalid input\n");

    }
    int size = evenzero(n, arr);
    printf("[");
    for(int i = 0; i < size;i++){
        printf("%d", arr[i]);
        if(i < size -1) printf(", ");


    }
    printf("]\n");
    return 0;
}