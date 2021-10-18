#include <stdio.h>
#include <stdlib.h>
//Factorial
void facto(int n);
int main(){
    int n;
    printf("Enter an Integer :");
    scanf("%d",&n);

    facto(n);
    return 0;
}
void facto(n){
    static int fact=1;
    fact=fact*n;
    if(--n>0){
        facto(n);
    }else{
        printf("Factorial = %d",fact);
    }
}

