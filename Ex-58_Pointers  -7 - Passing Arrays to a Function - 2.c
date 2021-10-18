#include <stdio.h>
#include <stdlib.h>
// Pointers - Passing a whole unsized array
// Arrays are always passing as reference not as value
void foo(int param[]);
int main(){
    int myArr[4]={0,1,2,3};
    printf("Before Calling...\n");
    foo(myArr);

    printf("After Printing...\n");
    for(int i=0;i<4;i++){
        printf("%d\n",myArr[i]);
    }

    return 0;
}
void foo(int param[]){
    for(int i=0;i<4;i++){
        printf("%d\n",param[i]++);
    }
}

