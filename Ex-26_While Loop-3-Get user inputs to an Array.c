#include <stdio.h>
#include <stdlib.h>
//Store user inputs inside an arrays and print them
int main(){
    int myArr[10];
    int count =0;
    int size=10;
    //get inputs
    while(count<size){
        printf("Enter a number :");
        scanf("%d",&myArr[count++]);
    }
    count=0;
    while(count<size){
        printf("%d\n",myArr[count++]);
    }
    return 0;
}

