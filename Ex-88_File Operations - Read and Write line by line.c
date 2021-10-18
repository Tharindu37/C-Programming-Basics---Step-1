#include <stdio.h>
#include <stdlib.h>
//File Operations - Read and write line by line
int main(){
    FILE *fp;
    int count=0;
    char str[100];
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\sample.txt","w");
    if(fp==NULL){
        printf("No suc a file!\n");
        getch();
        exit(0);
    }
    //get inputs
    while(count < 5){
        printf("Enter String :");
        fgets(str,sizeof(str),stdin);
        fprintf(fp,"%s",str);
        count++;
    }
    fclose(fp);
    //Open in Read Mode
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\sample.txt","r");
    if(fp==NULL){
        printf("Error Opening the file!");
        getch();
        exit(0);
    }
    //read/Print
    while(1){
        if(fgets(str,sizeof(str),fp)==NULL){
            break;
        }else{
            printf("%s",str);
        }
    }
    fclose(fp);
    return 0;
}


