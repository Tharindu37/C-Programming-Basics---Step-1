#include <stdio.h>
#include <stdlib.h>

int main(){
    char ope;
    float num1,num2;

    printf("Enter an Operator :");
    scanf("%c",&ope);
    printf("Enter Numbers (Ex:24,56) :");
    scanf("%f,%f",&num1,&num2);

    switch(ope){
    case '+':
        printf("Addition is %0.2f",num1+num2);
        break;
    case '-':
        printf("Substraction is %0.2f",num1-num2);
        break;
    case '*':
        printf("Multiplication is %0.2f",num1*num2);
        break;
    case '/':
        printf("Division is %0.2f",num1/num2);
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}


