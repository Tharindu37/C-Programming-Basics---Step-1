#include <stdio.h>
#include <stdlib.h>
//Calculate student total marks and average
int main(){
    int maths,science,sinhala,total;
    float average;

    printf("Enter marks of Mathemetics :");
    scanf("%d",&maths);
    printf("Enter marks of Science :");
    scanf("%d",&science);
    printf("Enter marks of Sinhala :");
    scanf("%d",&sinhala);

    //Calculations
    total=maths+science+sinhala;
    average=total/3.0;

    printf("Total Marks = %d\nAverage Marks = %0.2f",total,average);
    return 0;
}


