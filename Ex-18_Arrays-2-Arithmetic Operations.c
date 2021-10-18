#include <stdio.h>
#include <stdlib.h>
//Arrays-Arithmetic Operations & Replacements
int main(){
    int myNums[6]={10,20,30,40,50};
    int sum=myNums[2]+myNums[4];
    printf("Sum is %d\n",sum);

    printf("4th element of array before replace is %d\n",myNums[3]);
    myNums[3]=sum;
    printf("4th element of array after replace is %d\n",myNums[3]);

    printf("6th element of array before replace is %d\n",myNums[5]);
    myNums[5]=sum;
    printf("6th element of array after replace is %d\n",myNums[5]);
    return 0;
}



