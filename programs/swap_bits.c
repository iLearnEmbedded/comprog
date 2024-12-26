/*Swap bits 6 and 7 of a 32 bit variable*/
#include <stdio.h>
#define XPOS 6
#define YPOS 7
#define GETBIT(i,input) (((1<<i)&input)>>i)
#define ZEROBIT(i,input) ((~(1<<i))&input)
int A = 0x12345678;
int B;
//  A = 0001 0010 0011 0100 0101 0110 0111 1000
int main() {
    
    //swap bits 6 and 7
    // A = 0001 0010 0011 0100 0101 0110 1011 1000
    //A = 0x123456B8
A = ((ZEROBIT(XPOS,A) & ZEROBIT(YPOS,A)) | (GETBIT(XPOS,A)<<YPOS) | GETBIT(YPOS,A)<<XPOS);

printf("%0x",A);
}
