#include <stdio.h>
#include <stdlib.h>
//File Operations - Store Strings
int main(){
    FILE *fp;
    char svalue[30];
    char srel[30];

    //Create
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\three.txt","w");
    if(fp==NULL){
        printf("File Not Created!\n");
        getch();
        exit(0);
    }else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the String value to write :");
    scanf("%s",&svalue);

    //Writing to the file
    fprintf(fp,"%s",svalue);

    fclose(fp);

    //Open Read Mode
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\three.txt","r");
    if(fp==NULL){
        printf("File Not Exist!\n");
        getch();
        exit(0);
    }else{
        fscanf(fp,"%s",srel);
        printf("Content is : %s",srel);
    }
    fclose(fp);
    return 0;
}





