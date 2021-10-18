#include <stdio.h>
#include <stdlib.h>
//passing single element
void foo(int *param);
int main(){
    int myArr[4]={0,1,2,3};
    foo(&myArr[2]);
    printf("After Calling : %d",myArr[2]);
    return 0;
}
void foo(int *param){
    printf("%d\n",*param);
    (*param)++;
}

