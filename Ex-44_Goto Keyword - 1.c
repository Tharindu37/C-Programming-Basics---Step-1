#include <stdio.h>
#include <stdlib.h>
//goto keyword
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<0){
        goto invalidator;
    }
    printf("Your age is %d\n",age);

    invalidator:
        printf("Wrong entity!");
    return 0;
}

