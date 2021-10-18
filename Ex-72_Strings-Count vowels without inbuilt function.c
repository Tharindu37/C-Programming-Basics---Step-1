#include <stdio.h>
#include <stdlib.h>
//String -Count vowels without inbuilt function
int main(){
    int i;
    int vowels=0;
    char s[20];
    printf("Enter String :");
    scanf("%s",&s);
    //Iterate till \0
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowels++;
        }
    }
    printf("Vowels Count : %d",vowels);
    return 0;
}

