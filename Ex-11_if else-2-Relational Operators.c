#include <stdio.h>
#include <stdlib.h>
//if else-Relational Opetators
int main(){
    int x=10;
    int y=20;
    int z=10;
    int w=30;

    if(x==y){
        printf("x is equal to y");
    }else if(x != w){
        printf("x is not equal to w");
    }else if(y>=w){
        printf("y is grater than or equal to w");
    }else if(z<x){
        printf("z is less than x");
    }else if(y>w){
        printf("y is grater than w");
    }else if(z<=x){
        printf("z is less than or equal to x");
    }else{
        printf("i don't know what to tell..");
    }
    return 0;
}


