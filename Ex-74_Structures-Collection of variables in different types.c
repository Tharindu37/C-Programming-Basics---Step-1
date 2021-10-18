#include <stdio.h>
#include <stdlib.h>
//Structures - Collection of variables in different types
void fixFget(char s[]);
//Define
struct Student{
    char name[50];
    int age;
    float weight;
};
int main(){
    struct Student s;
    printf("Enter Name :");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter age :");
    scanf("%d",&s.age);
    printf("Enter Weight :");
    scanf("%f",&s.weight);

    //Remove fgets new line
    fixFget(s.name);
    //------------------------------
    printf("Name : %s\nAge : %d\nWeight : %0.2f",s.name,s.age,s.weight);
    return 0;
}
void fixFget(char s[]){
    char *pos=strchr(s,'\n');
    if(pos != NULL){
        *pos='\0';
    }
}

