#include <stdio.h>
#include <stdlib.h>
//Append Mode
int main(){
    FILE *fp;
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\six.txt","a");
    if(fp==NULL){
        printf("No suc a file!\n");
        getch();
        exit(0);
    }
    //write
    fprintf(fp,"\nGo to New Line");
    printf("Success!\n");
    fclose(fp);
    return 0;
}

