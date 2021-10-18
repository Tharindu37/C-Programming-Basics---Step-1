#include <stdio.h>
#include <stdlib.h>
//void ,int ,float and char function
//Function Declaration
void printName(char n[20]);
void printWeightHeight(float w,float h);
int calculateSalary();
char getGrade(int m);
int main(){
    //For printing name
    char name[20];
    printf("Enter Your Name :");
    fgets(name,sizeof(name),stdin);
    //calling
    printName(name);
    //for printing w & h
    printf("------------------------------\n");
    float weight,height;
    printf("Enter w & h :");
    scanf("%f,%f",&weight,&height);
    //calling
    printWeightHeight(weight,height);
    //for calculating salary
    printf("------------------------------\n");
    int salary=calculateSalary();
    printf("Your Salary is %d",salary);
    //for getting grade
    int marks;
    printf("------------------------------\n");
    printf("Enter Your marks :");
    scanf("%d",&marks);
    printf("Your grade is : %c",getGrade(marks));
    return 0;
}
void printName(char n[20]){
    printf("Your Name is %s",n);
}
void printWeightHeight(float w,float h){
    printf("Weigh : %0.2f\n",w);
    printf("Height : %0.2f\n",h);
}
int calculateSalary(){
    int sal,csal;
    printf("Enter salary :");
    scanf("%d",&sal);
    csal=sal+1500;
    return csal;
}
char getGrade(int m){
    if(m>=75){
        return 'A';
    }else if(m>=65){
        return 'B';
    }else if(m>=55){
        return 'C';
    }else if(m>=35){
        return 'S';
    }else{
        return 'W';
    }
}
