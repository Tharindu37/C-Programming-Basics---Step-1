#include <stdio.h>
#include <stdlib.h>
//Arithmetic Operations with User inputs
//For marks of 2 subjects for w students
int main(){
    int marks[2][2];
    int st1Total,st2Total;
    printf("Enter student 1 subject marks (Ex : 50,60) :");
    scanf("%d,%d",&marks[0][0],&marks[0][1]);
    printf("Enter student 2 subject marks (Ex : 50,60) :");
    scanf("%d,%d",&marks[1][0],&marks[1][1]);

    //Calculation
    st1Total=marks[0][0]+marks[0][1];
    st2Total=marks[1][0]+marks[1][1];

    printf("Student 1 Total Marks : %d\nStudent 2 Total Marks : %d\n",st1Total,st2Total);

    if(st1Total>st2Total){
        printf("Student 1 is brighter than Student 2\n");
    }else if(st1Total==st2Total){
        printf("Both are Bright Student\n");
    }else{
        printf("Student 2 is brighter than Student 1");
    }
    return 0;
}

