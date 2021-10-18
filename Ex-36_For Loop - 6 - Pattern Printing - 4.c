#include <stdio.h>
#include <stdlib.h>
//Pattern Printing
/*

*****
 ****
  ***
   **
    *

*/
int main(){
    //for lines
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<5-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



