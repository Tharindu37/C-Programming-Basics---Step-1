#include <stdio.h>
#include <stdlib.h>
//Call by Reference
int add(int *a,int *b);
int main(){
    int a=10;
    int b=20;
    int c;
    //Call refernce /address
    c=add(&a,&b);
    printf("Addition is %d\n",c);
    return 0;
}
int add(int *a,int *b){
    int c=*a+*b;
    return c;
}


