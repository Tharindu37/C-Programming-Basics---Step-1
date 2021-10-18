#include <stdio.h>
//Arithmetic Operators - Increments Decrement
main(){
    int x=10;
    int y=20;
    int a;

    printf("Pre Increment\n");
    a=++x;//++ means increase by 1
    printf("a=%d\n",a);
    printf("x=%d\n",x);

    printf("Post Increment\n");
    a=y++;
    printf("a=%d\n",a);
    printf("x=%d\n",y);

    x=10;
    y=20;

    printf("Pre Decrement\n");
    a=--x;//++ means increase by 1
    printf("a=%d\n",a);
    printf("x=%d\n",x);

    printf("Post Decrement\n");
    a=y--;
    printf("a=%d\n",a);
    printf("x=%d\n",y);

}


