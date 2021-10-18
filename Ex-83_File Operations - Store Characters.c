#include <stdio.h>
#include <stdlib.h>
//File Operations - Creating Files
//Organize Data
//Store re Accessible Data
//Can be Shared With Other Programs And Computers
int main(){
    FILE *fp;
    int cvalue,crel;

    //Create
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\two.txt","w");
    if(fp==NULL){
        printf("File Not Created!\n");
        getch();
        exit(0);
    }else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the character value to write :");
    scanf("%c",&cvalue);

    //Writing to the file
    fputc(cvalue,fp);

    //Close
    fclose(fp);

    //Read
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\two.txt","r");

    if(fp==NULL){
        printf("File not Exist!\n");
        getch();
        exit(0);
    }else{
        //Reading File
        crel=fgetc(fp);
        printf("Character : %c",crel);
    }
    fclose(fp);
    return 0;
}




