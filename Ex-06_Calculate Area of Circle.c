#include <stdio.h>
//Circle Area
main(){
    const float PI=3.14;
    float r,area;

    printf("Enter the radius :");
    scanf("%f",&r);

    //Calculation
    area=PI*r*r;
    printf("Area = %0.2f",area);
}


