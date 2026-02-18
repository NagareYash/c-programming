#include <stdio.h>

void print_binary(unsigned char x)
{
    for (int i = 7; i >= 0; i--) {
        if ( (x >> i) & 1 )
            printf("1");
        else
            printf("0");
    }
}

int main()
{
    unsigned char value  = 0xD3;                 // 11010011
    unsigned char mask   = (1 << 1) | (1 << 5);  // flip bit 1 and bit 5
    unsigned char result = value ^ mask;         // 11110001

    printf("Original value:  ");
    print_binary(value);
    printf("\n");

    printf("Modified value:  ");
    print_binary(result);
    printf("\n");

    return 0;
}
