#include <stdio.h>
#include <stdlib.h>
//Type Casting - Implicit
int main(){
    int x =10;
    char y='a';

    x=x+y;
    float z=x+1.0;

    printf("x = %d\nz = %f",x,z);
    return 0;
}
