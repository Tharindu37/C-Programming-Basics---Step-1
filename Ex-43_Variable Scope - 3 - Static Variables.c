#include <stdio.h>
#include <stdlib.h>
//Variable Scape
//Static Variables
void func1(){
    int a=1;
    //static variable
    static int b=100;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    a++;
    b++;
}
int main(){
    func1();
    func1();
    func1();
    return 0;
}

