#include <stdio.h>
#include <stdlib.h>
//String
int main(){
    char greed1[6]={'H','e','l','l','o','\0'};
    printf("%s\n",greed1);
    printf("%d\n",greed1[5]);

    char greed2[]="Hello";
    printf("%s\n",greed2);
    printf("%d\n",greed2[5]);

    char *greed3="Hello";
    printf("%s\n",greed3);
    printf("%d\n",greed3[5]);

    return 0;
}

