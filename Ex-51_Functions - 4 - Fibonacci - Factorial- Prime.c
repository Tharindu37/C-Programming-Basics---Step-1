#include <stdio.h>
#include <stdlib.h>
//Fibonacci,Factorial,Prime Number Program
//With Function
void factorial(int x);
int isPrime(int x);
void fibonacci(int x);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    //Calling
    factorial(n);
    getch();
    isPrime(n);
    getch();
    fibonacci(n);
    return 0;
}
void factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    printf("%d! = %d\n",x,fact);
}
int isPrime(int x){
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            printf("%d is Not Prime.\n",x);
            getch();
            return 0;
        }
    }
    if(x!=1){
        printf("%d is Prime.\n",x);
    }else{
        printf("%d is Not Prime.",x);
    }
    return 0;
}
void fibonacci(int x){
    int pre=0;
    int cur=1;
    printf("%d\t%d",pre,cur);
    for(int i=3;i<=x;i++){
        int temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d",cur);
    }
}

