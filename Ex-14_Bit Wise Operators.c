#include <stdio.h>
#include <stdlib.h>
//Bit Wise Operators - bit Level
/*
& | ^ ~ >> <<
*/
int main(){
    int a=11;
    int b=5;
    int c,d;

    printf("Binary And = %d\n",a&b);
    /*
    11  -00001011
    5   -00000101
    11&5-00000001
    */
    printf("Binary Or = %d\n",a|b);
    /*
    11  -00001011
    5   -00000101
    11|5-00001111
    */
    printf("Binary XOR = %d\n",a^b);
    /*
    11  -00001011
    5   -00000101
    11^5-00001110
    */
    printf("Complement = %d\n",~b);
    /*
    5 -00000101
    ~5-11111010<---2's Complement
    11111010
          -1
    11111001
    00000110--->-6
    */
    c=a>>1;
    printf("Right Shift = %d\n",c);
    /*
    11   -00001011
    11>>1-00000101
    */
    c=a<<1;
    printf("Left Shift = %d\n",c);
    /*
    11   -00001011
    11<<1-00010110
    */
    return 0;
}


