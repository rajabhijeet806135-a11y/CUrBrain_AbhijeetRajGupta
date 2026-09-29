#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int n , count=0, temp;

    printf("enter the number\n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    temp= n ;
    do{
        temp/=10;
        count+=1;

    } while(temp!=0);

if (n>=0){
    if(n%2==0){
        printf("True\n");
        printf("\n %d has %d digits, which is even\n",n,count);

    }
    else{
         printf("False\n");
        printf("\n %d has %d digits, which is odd\n",n,count);


    }

    }
    else{
        printf("False\n");
        printf("The minus sign is not a digit. %d has %d digits\n",-n,count);



    }

return 0;
}
