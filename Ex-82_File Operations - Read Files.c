#include <stdio.h>
#include <stdlib.h>
//File Operations - Creating Files
//Organize Data
//Store re Accessible Data
//Can be Shared With Other Programs And Computers
int main(){
    FILE *fp;
    int value,rel;

    //Create
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\one.txt","w");
    if(fp==NULL){
        printf("File Not Created!\n");
        getch();
        exit(0);
    }else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the value to write :");
    scanf("%d",&value);

    //Write
    putw(value,fp);

    //Close
    fclose(fp);

    //Read
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\one.txt","r");

    //Reading File
    rel=getw(fp);
    printf("The result is %d",rel);

    fclose(fp);
    return 0;
}



