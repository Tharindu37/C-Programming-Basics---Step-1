#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//String Inbuilt Function
int main(){
    char str[20];
    printf("Enter a String :");
    fgets(str,sizeof(str),stdin);
    printf("Revetse : %s",strrev(str));
    return 0;
}


