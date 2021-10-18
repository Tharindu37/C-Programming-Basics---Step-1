#include <stdio.h>
#include <stdlib.h>
//Loop control structures
//for repetitive tasks until a condition gets false
//While Loop
int main(){
    //Without loops
    printf("You got 1 rupees\n");
    printf("You got 2 rupees\n");
    printf("You got 3 rupees\n");
    printf("You got 4 rupees\n");
    printf("You got 5 rupees\n\n");
    //With while loop
    int count=0;
    while(count<5){
        /*printf("You got %d rupees\n",count+1);
        count++;*/
        printf("You got %d rupees\n",++count);
    }
    return 0;
}

