#include <stdio.h>
#include <stdlib.h>
//Switch Case-Case control Structures
int main(){
    char grade;
    printf("Enter your grade : ");
    scanf("%c",&grade);

    switch(tolower(grade)){//toupper
    case 'a':
        printf("Well Done!");
        break;
    case 'b':
        printf("Good!");
        break;
    case 'c':
        printf("Not Bad!");
        break;
    case 's':
        printf("Ok!");
        break;
    default:
        printf("you have to work hard!");
    }
    return 0;
}


