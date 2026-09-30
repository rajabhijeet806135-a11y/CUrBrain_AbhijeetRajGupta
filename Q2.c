#include<stdio.h>
#include<stdlib.h>

int reverse_double(int n){
    int temp,rev=0,j=0;
    temp=n;
    while(temp!=0){
        j=temp%10;
        temp=temp/10;
        rev = rev*10 + j;
        
    }
    printf("%d",2*rev);
}
int main(){
    int n;
    printf("enter the number you want to reverse and double:\n");
    scanf("%d",&n);
    reverse_double(n);
return 0;
}