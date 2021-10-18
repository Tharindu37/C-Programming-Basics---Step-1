#include <stdio.h>
#include <stdlib.h>
//Factorial
//Ex :5--->5x4x3x2x1
int main(){
    int n;
    int fact=1;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d!=%d",n,fact);
    return 0;
}

