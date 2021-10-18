#include <stdio.h>
#include <stdlib.h>
//reverse an array
int main(){
    char name[]="Tharindu Lakshan";
    int size=sizeof(name)/sizeof(name[0]);
    int count=size-1;

    while(count>=0){
        printf("%c",name[--count]);
    }
    return 0;
}


