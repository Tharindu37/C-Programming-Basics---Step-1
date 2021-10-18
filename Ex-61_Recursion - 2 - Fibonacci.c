#include <stdio.h>
#include <stdlib.h>
//Fibonacci
void fibon(int pre,int cur,int x);
int main(){
    int n;
    int pre=0;
    int cur=1;
    printf("Enter Number :");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);

    //Calling
    fibon(pre,cur,n);
    getch();
    return 0;
}
void fibon(int pre,int cur,int x){
    int temp;
    if(x<=2){
        getch();
        exit(0);
    }
    temp=cur;
    cur=cur+pre;
    pre=temp;
    printf("\t%d",cur);
    fibon(pre,cur,--x);
}
