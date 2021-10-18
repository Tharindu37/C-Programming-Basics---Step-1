#include <stdio.h>
#include <stdlib.h>
//Function Declaration / prototype
void printName();
int main(){
    printf("Hello world!\n");
    //calling the function
    printName();
    getch();
    return 0;
}
//Function Definition
void printName(){
    char name[20];
    printf("Enter Your name :");
    fgets(name,sizeof(name),stdin);

    printf("Your name : %s",name);
}

