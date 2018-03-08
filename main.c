#include <stdio.h>
#include <stdlib.h>

/*
    In this example in binary:
    a = 1001001101001
    and
    b = 0100010010101

*/


unsigned int countBitDiff(unsigned int a, unsigned int b)
{
    unsigned bitDiff = 0;
    unsigned int xor = a ^ b;

    while(xor != 0)
    {
        if(xor%2 == 1)
        {
            bitDiff++;
        }

        xor >>= 1;
    }

    return bitDiff;
}

int main()
{
    unsigned int a = 4713, b = 2197;
    printf("Number of bits that differ for %u and %u are %d", a,b, countBitDiff(a,b));
    return 0;
}
