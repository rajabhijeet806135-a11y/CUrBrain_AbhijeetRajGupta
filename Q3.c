#include<stdio.h>
#include<stdlib.h>

int palindrome_double(int n){
    int temp,rev=0,j=0;
    temp=n;
    while(temp!=0){
        j=temp%10;
        temp=temp/10;
        rev = rev*10 + j;
        
    }
    if(n==rev){
        printf("the number is palindromr:%d",rev);

    }
    else{
    printf("%d",n+rev);
}}
int main(){
    int n;
    printf("enter the number you want to check for palindrome , :\n");
    scanf("%d",&n);
    palindrome_double(n);
return 0;
}