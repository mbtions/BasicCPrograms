#include <stdio.h>

int main()
{
    // decimal, octal, hexadecimal will be converted to integer since %d for decimal is used.
    printf("%d %d %d %d", 72,072,0x72,0X72);
    
    // %d: integer, %o:octal, %x:hexadecimal 
    printf("\n%d %o %x", 72, 72, 72);
    
    // %i is for integers
    printf("%i %i %i %i", 72,072,0x72,0X72);

    //
    printf("%05d %5d %-5d", 32, 32, 32);

    // permutations and combinations using %-5d concept

}