#include <stdio.h>
#include <stdlib.h>
//Function with parameters
float getAnswer(float x,int y);
int main(){
    float num1;
    int num2;
    printf("Enter Numbers :");
    scanf("%f,%d",&num1,&num2);
    //float ans=getAnswer(num1,num2);
    printf("Ans : %f",getAnswer(num1,num2));
    return 0;
}
float getAnswer(float x,int y){
    return x+y;
}

