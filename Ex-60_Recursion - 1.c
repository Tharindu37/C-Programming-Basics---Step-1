#include <stdio.h>
#include <stdlib.h>
//Recursion
void recur(int x);
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    //Calling
    recur(n);
    getch();
    return 0;
}
void recur(int x){
    printf("%d\n",x);
    if(x>0 && x<=20){
        //Recursion
        recur(x-1);
    }
}

