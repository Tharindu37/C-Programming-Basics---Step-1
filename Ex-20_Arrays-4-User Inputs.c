#include <stdio.h>
#include <stdlib.h>
//Name as a user input
int main(){
    char friendName[20];
    /*char name[20];
    printf("Enter Your Name :");
    scanf("%s",&name);

    printf("Your Name is %s\n",name);*/

    //------------------------------
    printf("Enter Your Friend Name :");
    fgets(friendName,sizeof(friendName),stdin);
    //printf("Your Friend Name is %s",friendName);
    puts(friendName);
    return 0;
}

