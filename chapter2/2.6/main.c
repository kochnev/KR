#include <stdio.h>
#include <string.h>     /* strcat */

unsigned getbits(unsigned x, int p, int n);
void printAsBinary(int n);


const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

int main()
{
    int p = 4;
    int n = 3;

    unsigned x = 0b00111001;
    unsigned y = 0b00101101;

    //printAsBinary(x);
    unsigned res =  x & ~(~(~0 << n) << p+1-n) | (y & ~(~0 << n)) << p+1-n ;
    printf("%s\n", byte_to_binary(res));

}

//getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
