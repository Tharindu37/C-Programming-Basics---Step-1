#include <stdio.h>
#include <stdlib.h>
//Marriage Eligibility checking program
int main(){
    int age;
    char martialStatus,gender;
    system("CLS");
    printf("Enter Martial Status, Gender, Age :(Ex: m,f,21) :");
    scanf("%c,%c,%d",&martialStatus,&gender,&age);

    if(martialStatus == 'm'){
        printf("You can't marry..");
    }else if(martialStatus == 'u' || martialStatus == 's'){
        if(gender == 'm'){
            if(age>=21)
                printf("You can marry...");
            else
                printf("You can't marry...");
        }else if(gender == 'f'){
            if(age >=18)
                printf("You can marry...");
            else
                printf("You can't marry...");
        }else{
            printf("Invalid input as a Gender");
        }
    }else{
        printf("Invalid input as a Martial Status");
    }
    return 0;
}


