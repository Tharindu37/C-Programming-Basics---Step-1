#include <stdio.h>
#include <stdlib.h>
//Pattern Printing
// Patter 1 - Triangle with Nested Loops
/*

    *
   **
  ***
 ****
*****

*/
int main(){
    //for lines
    for(int i=0;i<5;i++){
        //for spaces
        for(int j=0;j<5-(i+1);j++){
            printf(" ");
        }
        //for star
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

