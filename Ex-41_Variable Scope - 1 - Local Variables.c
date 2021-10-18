#include <stdio.h>
#include <stdlib.h>
//Variable Scope
//Local Variables
int main(){
    //Local Variables
    int x=20;
    int y=30;

    printf("Before Y : %d\n",y);
    //Use(change)
    y=50;
    printf("After Y : %d\n",y);

    if(x<y){
        int k=60;
        printf("K is %d\n",k);
        k=80;
        printf("K is %d\n",k);
    }
    //printf("Print %d",k);
    return 0;
}
