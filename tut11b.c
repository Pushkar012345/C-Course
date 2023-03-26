#include<stdio.h>

int main(){
    int marks,age;
    printf("Enter your marks");
    scanf("%d",&marks);
    printf("Enter your age");
    scanf("%d",&age);
    switch(marks){
        case 19:
        printf("marks is 19");
        switch(age){
            case 7:
            printf("age is 7");
            break;

            case 8:
            printf("age is 8");
            break;

            default:
            printf("age is not 7 nor 8");
            
        }
        break;
    
        case 11:
        printf("marks is 11");
        break;
        default:
        printf("marks not 19 and 11");
        
    }
    return 0;

}