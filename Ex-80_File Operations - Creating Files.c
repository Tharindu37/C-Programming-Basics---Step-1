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
        printf("File Not Created!");
        //getch();
        //exit(0);
    }else{
        printf("File Created Successfully!");
    }
    return 0;
}

