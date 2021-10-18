#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//String Inbuilt Function
int main(){
    char str1[20];
    char str2[20];
    printf("Enter First Name :");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter Last Name :");
    fgets(str2,sizeof(str2),stdin);

    //Compare
    if(strcmp(str1,str2)==0){
        printf("Equal");
    }else{
        printf("Not Equal");
    }
    return 0;
}






