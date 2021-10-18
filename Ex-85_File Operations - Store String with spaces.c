#include <stdio.h>
#include <stdlib.h>
//File Operations - Store Strings with spaces
int main(){
    FILE *fp;
    char svalue[30];
    char srel;

    //Create
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\four.txt","w");
    if(fp==NULL){
        printf("File Not Created!\n");
        getch();
        exit(0);
    }else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the String value to write :");
    fgets(svalue,sizeof(svalue),stdin);

    //Writing to the file
    fprintf(fp,"%s",svalue);

    fclose(fp);

    //Open Read Mode
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\four.txt","r");
    if(fp==NULL){
        printf("File Not Exist!\n");
        getch();
        exit(0);
    }else{
        //read
        do{
            srel=getc(fp);
            printf("%c",srel);
        }while(srel!=EOF);
    }
    fclose(fp);
    return 0;
}






