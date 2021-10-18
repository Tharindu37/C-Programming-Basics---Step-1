#include <stdio.h>
#include <stdlib.h>
//Nested if else with conditional operators
int main(){
    int a=20;
    int b=30;
    int c=20;

    if(a>=b && a<c){
        printf("a>=b && a<c");
    }else if(b>=c){
        if(b!=20 || b>a){
            printf("b not equal to 20 or b greater than a");
        }else{
            printf("b is equal to 20 and b is less than or equla a");
        }
    }else{
        printf("I don't know what to tell...");
    }
    return 0;
}


