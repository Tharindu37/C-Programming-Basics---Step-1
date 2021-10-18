#include <stdio.h>
main(){
    //Variable--->age,grade,salary,latitude
    //Data Types--->int,char,float,double
    int age=21;
    char grade='A';
    float salary=6000.60;
    double latitude=6.472947;

    //print values
    printf("My age is %d\n",age);
    printf("My grade is %c\n",grade);
    printf("My salary is %f\n",salary);
    printf("Latitude is %lf\n",latitude);

    printf("\n-------------------------------\n");
    //print values
    printf("My age is %d\n",age);
    printf("My grade is %c\n",grade);
    printf("My salary is %0.2f\n",salary);
    printf("Latitude is %0.3lf\n",latitude);

    printf("\n-------------------------------\n");
    //print values
    printf("My age is %5d\n",age);
    printf("My grade is %10c\n",grade);
    printf("My salary is %15.2f\n",salary);
    printf("Latitude is %20.3lf\n",latitude);

    printf("\n-------------------------------\n");
    //Size of Variables
    printf("Size of int %d\n",sizeof(age));
    printf("Size of char %d\n",sizeof(grade));
    printf("Size of float %d\n",sizeof(salary));
    printf("Size of double %d\n",sizeof(latitude));
}


