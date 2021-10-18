#include <stdio.h>
#include <stdlib.h>
//Structures
void fixFget(char s[]);
//Define
struct Employee{
    char name[50];
    int pCode;
    float salary;
};
int main(){
    //array
    struct Employee e[3];
    //Get inputs
    for(int i=0;i<3;i++){
        printf("Enter Name :");
        fgets(e[i].name,sizeof(e[i].name),stdin);
        printf("Enter P Code :");
        scanf("%d",&e[i].pCode);
        printf("Enter Salary :");
        scanf("%f",&e[i].salary);
        fflush(stdin);
        printf("\n");
    }
    //-------------------------------
    printf("\========nprint Data========\n");
    printf("Employee Id         Name        PostalCode         Salary\n");
    for(int i=0;i<3;i++){
        fixFget(e[i].name);
        printf("%d\t\t%s\t\t%d\t\t%0.2f\n",i+1,e[i].name,e[i].pCode,e[i].salary);
    }
}
void fixFget(char s[]){
    char *pos=strchr(s,'\n');
    if(pos != NULL){
        *pos='\0';
    }
}


