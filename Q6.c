#include<stdio.h>
#include<stdlib.h>
int dfd(int n , int a , int b){
    int temp,j=0,ca=0,cb=0;
    temp=n;
    do{
        j=temp%10;
        temp=temp/10;
        if(j==a){
            ca+=1;
        }
         if(j==b){
            cb+=1;
        }

    }while(temp!=0);

    return abs(ca-cb);
}
int main(){
    int n, a ,b;
    printf("enter the numberof n\n");
    scanf("%d",&n);
     printf("enter the numberof a\n");
    scanf("%d",&a);
     printf("enter the numberof b\n");
    scanf("%d",&b);
    
    
    if (n < 0) {
        printf("The input is negative.\n");
    } else {
        printf("The absolute difference: %d\n", dfd(n, a, b));
    }

return 0;
}
