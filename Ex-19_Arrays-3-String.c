#include <stdio.h>
#include <stdlib.h>
//String on character arrays
int main(){
    char myName[20]="Tharindu Lakshan";
    char name[10]={'B','a','n','d','a','r','a'};
    char uni[]="Sri Jayawardhanapura";//"Sri Jayawardhanapura\0"
    printf("My Name is %s\n",myName);
    printf("Second Name is %s\n",name);
    printf("My University is %s\n",uni);

    int uniArraySize=sizeof(uni)/sizeof(uni[0]);
    printf("uni Array Size = %d\n",uniArraySize);

    printf("uni Array 20th element is %c\n",uni[19]);
    printf("uni Array 21st element is %d\n",uni[20]);
    return 0;
}


