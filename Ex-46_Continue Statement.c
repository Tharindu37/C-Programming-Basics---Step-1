#include <stdio.h>
#include <stdlib.h>
//continue keyword with while loop
int main(){
    int count =0;
    while(count<5){
        printf("Instruction 1\n");
        printf("Instruction 2\n");
        count++;
        if(count % 2 == 0){
            printf("Instruction 3\n");
            continue;
            printf("Instruction 4\n");
        }
        printf("Instruction 5\n");
    }
    return 0;
}

