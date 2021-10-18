#include <stdio.h>
#include <stdlib.h>
//Call by Reference
void add(int *a,int *b,int *c);
int main(){
    int a=10;
    int b=20;
    int c;
    //Call refernce /address
    add(&a,&b,&c);
    printf("Addition is %d\n",c);
    return 0;
}
void add(int *a,int *b,int *c){
    *c=*a+*b;
}



