#include<stdio.h>

int main(){
    int n,sum=0;
    
    do{
        printf("Enter a number");                                     
        scanf("%i",&n);
        sum+=n;

    }while(n!=0);
    printf("sum=%d",sum);

    return 0;
}