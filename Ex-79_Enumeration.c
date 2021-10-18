#include <stdio.h>
#include <stdlib.h>
//Enumeration - User defined data types
//Define
enum year{January, February, March, April, May, June, July, August, September, October, November, December};
enum week{Mon=10,Tue,Wed,Thur,Fri=10,Sat=16,Sun};
int main(){
    for(int i=January;i<=December;i++){
        printf("%d\n",i);
    }
    printf("-----------------------\n");
    printf("%d\n",Mon);
    printf("%d\n",Tue);
    printf("%d\n",Wed);
    printf("%d\n",Thur);
    printf("%d\n",Fri);
    printf("%d\n",Sat);
    printf("%d\n",Sun);
    return 0;
}

