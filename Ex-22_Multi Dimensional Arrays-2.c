#include <stdio.h>
#include <stdlib.h>
//Multi Dimensional Arrays-Matrix
//Temperatures of 2 cities in 5 days
int main(){
    int temp[5][2]={{20,30},{22,31},{25,35},{30,31},{30,21}};

    printf("Day 1 :\n\tCity 1 Temp : %d And City 2 Temp : %d\n",temp[0][0],temp[0][1]);
    printf("Day 2 :\n\tCity 1 Temp : %d And City 2 Temp : %d\n",temp[1][0],temp[1][1]);
    printf("Day 3 :\n\tCity 1 Temp : %d And City 2 Temp : %d\n",temp[2][0],temp[2][1]);
    printf("Day 4 :\n\tCity 1 Temp : %d And City 2 Temp : %d\n",temp[3][0],temp[3][1]);
    printf("Day 5 :\n\tCity 1 Temp : %d And City 2 Temp : %d\n",temp[4][0],temp[4][1]);

    printf("\n-------Array Size-------\n");
    printf("Array Size : %d\n",5*2);
    printf("Size of one element in a row : %d\n",sizeof(temp[0][0]));
    printf("Size of a row : %d\n",sizeof(temp[0]));
    printf("Number of columns in a row : %d",sizeof(temp[0])/sizeof(temp[0][0]));

    return 0;
}

