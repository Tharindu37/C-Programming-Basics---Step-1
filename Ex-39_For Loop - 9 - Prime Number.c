#include <stdio.h>
#include <stdlib.h>
//Prime Number
//Number that can divide by only 1 and it self
int main(){
    int n;
    printf("Enter an Number :");
    scanf("%d",&n);
    //for loop
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d is Not Prime Number",n);
            getch();
            exit(0);
        }
    }
    if(n==1 || n==0){
        printf("%d is Not Prime Number",n);
    }else{
        printf("%d is Prime Number",n);
    }
    return 0;
}

