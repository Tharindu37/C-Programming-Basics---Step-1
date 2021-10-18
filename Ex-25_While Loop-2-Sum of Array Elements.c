#include <stdio.h>
#include <stdlib.h>
//Arrays-Get sum of marks array
int main(){
    int marks[10]={10,20,30,40,50,60,70,80,90,100};
    int count=0;
    int sum=0;
    int size=sizeof(marks)/sizeof(marks[0]);
    while(count<size){
        sum+=marks[count];
        printf("Student %d marks = %d\n",count,marks[count++]);
    }
    printf("Sum of marks = %d\n",sum);
    return 0;
}

