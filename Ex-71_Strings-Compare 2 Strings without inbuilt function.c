#include <stdio.h>
#include <stdlib.h>
//Strings - Compare 2 strings without inbuilt function
int main(){
    int i;
    char str1[12];
    char str2[12];

    printf("Enter String 1 :");
    scanf("%s",str1);
    printf("Enter String 2 :");
    scanf("%s",str2);

    //Compare
    //Iterate String 1 till \0
    if(strlen(str1)>strlen(str2)){
        for(i=0;str1[i] != '\0';i++){
        //Check Strings Character by character
            if(str1[i] != str2[i]){
                if(str1[i]>str2[i]){
                    printf("String 1 is Greater\n");
                }else{
                    printf("String 2 is Greater\n");
                }
                getch();
                exit(0);
            }
        }
    }else{
        for(i=0;str2[i] != '\0';i++){
        //Check Strings Character by character
            if(str1[i] != str2[i]){
                if(str1[i]>str2[i]){
                    printf("String 1 is Greater\n");
                }else{
                    printf("String 2 is Greater\n");
                }
                getch();
                exit(0);
            }
        }
    }
    printf("Strings are equal!");
    getch();
    return 0;
}

