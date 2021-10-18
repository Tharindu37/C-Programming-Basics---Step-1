#include <stdio.h>
#include <stdlib.h>
//goto keyword with for loops
int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers :");
    scanf("%d,%d,%d",&n1,&n2,&n3);

    for(int i=0;i<n1;i++){
        for(int j=0;i<n2;i++){
            for(int k=0;k<n3;k++){
                if(n2==n3){
                    goto sample;
                }else{
                    printf("Someting\n");
                }
            }
        }
    }
    sample:
        printf("n2 is equal to n3");
    return 0;
}


