#include <stdio.h>
#include <stdlib.h>
//Pointer Arithmetic
int main(){
    int myArr[4]={0,7,5,3};
    int *ptr=&myArr[0];

    printf("Element 1 : %d\n",*ptr);
    printf("Address 1 : %x\n",ptr);

    *ptr=*ptr+2;

    printf("Element 1 : %d\n",*ptr);
    printf("Address 1 : %x\n",ptr);

    ptr++;//*ptr++

    printf("Element 2 : %d\n",*ptr);
    printf("Address 3 : %x\n",ptr);
    return 0;
}

