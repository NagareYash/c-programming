#include <stdio.h>

typedef unsigned char BYTE;

int main()
{
    BYTE arr[4] = {10, 20, 30, 40};
    BYTE *p = arr;

    long addr_before = (long)p;
    printf("Before increment: Value = %d, Address = %ld\n", *p, addr_before);

    p++;

    long addr_after = (long)p;
    printf("After increment:  Value = %d, Address = %ld\n", *p, addr_after);

    printf("Difference: %ld\n", addr_after - addr_before);

    return 0;
}