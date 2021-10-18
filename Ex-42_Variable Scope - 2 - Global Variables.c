#include <stdio.h>
#include <stdlib.h>
//Variable Scope
//Global Variables
int all=100;
int main(){
    int a=30;
    printf("Before all : %d\n",all);
    all=50;
    printf("After all : %d\n",all);

    if(all==50){
        printf("Before all : %d\n",all);
        all=70;
        printf("After all : %d\n",all);
    }
    return 0;
}

