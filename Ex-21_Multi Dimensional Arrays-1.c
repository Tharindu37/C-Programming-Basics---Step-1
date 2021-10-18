#include <stdio.h>
#include <stdlib.h>
//Multi Dimensional Arrays-Matrix
//2 dimensional arrays -2D array
//Arrays inside arrays
int main(){
    int nums[2][3]={{1,2,3},{4,5,6}};

    printf("%d\n",nums[0][1]);
    printf("%d\n",nums[1][2]);

    nums[1][2]=15;
    printf("%d\n",nums[1][2]);
    return 0;
}
