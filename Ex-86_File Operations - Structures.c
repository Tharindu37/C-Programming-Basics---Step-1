#include <stdio.h>
#include <stdlib.h>
//File Operations - Structures
struct Student{
    int id;
    int marks;
};
int main(){
    FILE *fp;
    struct Student stva1,strel;

    //Create
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\five.dat","wb");
    if(fp==NULL){
        printf("File Not Created!\n");
        getch();
        exit(0);
    }else{
        printf("File Created Successfully!\n");
    }

    printf("Enter Id :");
    scanf("%d",&stva1.id);
    printf("Enter Marks :");
    scanf("%d",&stva1.marks);

    fwrite(&stva1,sizeof(stva1),1,fp);
    fclose(fp);

    //open
    fp=fopen("C:\\Users\\Tharindu\\Documents\\New folder\\five.dat","rb");
    fread(&strel,sizeof(strel),1,fp);
    printf("The id is %d\n",strel.id);
    printf("The mark is %d\n",strel.marks);
    return 0;
}







