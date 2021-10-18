#include <stdio.h>
//Arithmetic Operators + - / % *
main(){
    int num1=10;
    int num2=6;
    float num3=10.5;
    float num4=4.1;

    int add1,sub1,multi1,div1,mod1;
    float add2,sub2,multi2,div2;

    //for Integers
    add1=num1+num2;
    sub1=num1-num2;
    multi1=num1*num2;
    div1=num1/num2;
    mod1=num1%num2;

    //for float
    add2=num3+num4;
    sub2=num3-num4;
    multi2=num3*num4;
    div2=num3/num4;

    printf("\n----------Integers-------------\n");
    printf("Addition : %d\n",add1);
    printf("Substraction : %d\n",sub1);
    printf("Multiplication : %d\n",multi1);
    printf("Division : %d\n",div1);
    printf("Modulus : %d\n",mod1);

    printf("\n-------------float--------------\n");
    printf("Addition : %f\n",add2);
    printf("Substraction : %f\n",sub2);
    printf("Multiplication : %f\n",multi2);
    printf("Division : %f\n",div2);
}


