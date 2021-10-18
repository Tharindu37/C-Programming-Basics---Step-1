#include <stdio.h>
#include <stdlib.h>
//Pointers
//Some kind of variable that can hold (refer) an address of another actual variable
int main(){
    int age=23;
    int *ptr=&age;

    printf("Value of age : %d\n",age);
    printf("Value of age : %d\n",*&age);
    printf("Value of age : %d\n",*(&age));
    printf("Value of age : %d\n",*ptr);

    printf("Address of age : %x\n",&age);
    printf("Address of age : %x\n",ptr);
    return 0;
}

