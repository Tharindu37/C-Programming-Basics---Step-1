#include <stdio.h>
#include <stdlib.h>
//unions - Allows to store different data types in same memory locaton
union Data{
    int i;
    float f;
    char str[20];
};
int main(){
    union Data d;
    printf("Memory size occupied by : %d\n",sizeof(d));

    //Use Members
    d.i=10;
    d.f=220.5;
    strcpy(d.str,"Tharindu Lakshan");

    printf("d.i : %d\n",d.i);
    printf("d.f : %f\n",d.f);
    printf("d.str : %s\n",d.str);
    printf("memory location---------\n");
    printf("d.i :%x\n",&(d.i));
    printf("d.f :%x\n",&(d.f));
    printf("d.str :%x\n",&(d.str));
    printf("d :%x\n",&d);
    return 0;
}

