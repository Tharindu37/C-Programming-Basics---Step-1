#include <stdio.h>
#include <stdlib.h>
//Fibonacci Series
int main(){
    int n;
    int pre=0;
    int cur=1;
    printf("Enter Number :");
    scanf("%d",&n);
    printf("%d\t%d\t",pre,cur);
    //For Loop
    for(int i=3;i<=n;i++){
        int temp=pre+cur;
        pre=cur;
        cur=temp;
        printf("%d\t",cur);
    }
    return 0;
}

