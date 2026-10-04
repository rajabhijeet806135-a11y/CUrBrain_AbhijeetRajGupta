#include<stdio.h>
#include<stdlib.h>

int diffSandP(int n){
    int temp,j=1,sum=0,pro=1;
    temp=n;
  do{
        j=temp%10;
        temp=temp/10;
        sum+=j;
        pro*=j;
        ;
        
    }  while(temp!=0);
    
   printf("the differnce in products-sum:%d\n",pro-sum);
}
int main(){
    int n;
    printf(" the differnce in products-sum:\n");
    scanf("%d",&n);
    if(n>0){
        diffSandP(n);    }
    else{
        printf("enter a postive number:");
    }
return 0;
}
