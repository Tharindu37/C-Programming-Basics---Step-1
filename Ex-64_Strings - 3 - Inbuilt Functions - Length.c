#include <stdio.h>
#include <stdlib.h>
//String Inbuilt Function
int main(){
    char str[20];
    printf("Enter a String :");
    fgets(str,sizeof(str),stdin);
    printf("Length : %d",strlen(str));
    return 0;
}

