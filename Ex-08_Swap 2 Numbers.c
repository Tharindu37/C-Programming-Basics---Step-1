#include <stdio.h>
#include <stdlib.h>
//Swapping 2Numbers
int main(){
    int a,b,temp;
    printf("Enter numbers(Ex: 50,60) :");
    scanf("%d,%d",&a,&b);

    printf("Before Swapping :\n\ta=%d\n\tb=%d\n",a,b);

    //Swapping
    temp=a;
    a=b;
    b=temp;

    printf("After Swapping :\n\ta=%d\n\tb=%d",a,b);
    return 0;
}


