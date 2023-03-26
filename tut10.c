#include<stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d\n",&num);
    if(num<10){
        printf("number is less than 10");
    }
    else
    {
       printf("number is greater than 10");
    }
    return 0;
    }