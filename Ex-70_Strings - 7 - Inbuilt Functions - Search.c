#include <stdio.h>
#include <stdlib.h>
//String Inbuilt Function
int main(){
    char text[50]="Tharindu Lakshan Bandar.com";
    char find1[12]="dar";
    char find2='.';

    char *search1;
    char *search2;

    search1=strstr(text,find1);
    printf("The String after substring '%s' is : %s\n",find1,search1);

    search2=strchr(text,find2);
    printf("The String after charecter '%c' is : %s\n",find2,search2);
    return 0;
}

