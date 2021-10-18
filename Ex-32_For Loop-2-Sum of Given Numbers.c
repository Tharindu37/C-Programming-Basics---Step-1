#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,ui,i;
    int sum=0;
    printf("How many numbers do you want to enter? :");
    scanf("%d",&n);
    //for loop
    for(i=0;i<n;i++){
        printf("Enter number %d :",i+1);
        scanf("%d",&ui);
        sum+=ui;
    }
    printf("Sum : %d",sum);
    return 0;
}

