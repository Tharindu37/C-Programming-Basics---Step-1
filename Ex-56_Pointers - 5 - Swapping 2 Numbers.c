#include <stdio.h>
#include <stdlib.h>
//Swapping 2 numbers
void swap(int *x,int *y);
int main(){
    int a,b;
    printf("Enter 2 numbers :");
    scanf("%d,%d",&a,&b);
    printf("Before Swapping : \n a=%d\n b=%d\n",a,b);
    //Calling
    swap(&a,&b);
    printf("After Swapping : \n a=%d\n b=%d\n",a,b);
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
