#include <stdio.h>
#include <stdlib.h>
//multi dimensional array With nested loops
//inputs for A/L biology 3 subjects marks for 3 student
int main(){
    int marks[3][3];
    int count1=0;
    int count2=0;
    int ui;
    int sum=0;
    float avg=0;
    //for rows
    while(count1<3){
        sum=0;
        avg=0;
        count2=0;
        //for columns
        while(count2<3){
            printf("Subject %d marks on Student %d :",count2+1,count1+1);
            scanf("%d",&ui);
            //Assign marks to 2D array
            marks[count1][count2]=ui;
            count2++;
            //Sum of marks
            sum+=ui;
        }
        //Calculate avg
        avg=sum/3.0;
        printf("Student %d Average : %0.2f\n",count1+1,avg);
        count1++;
    }
    return 0;
}

