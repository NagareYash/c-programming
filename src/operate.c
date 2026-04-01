#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int square_sum(int a, int b)
{
    return a * a + b * b;
}

int operate(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Add:        %d\n", operate(a, b, add));
    printf("Multiply:   %d\n", operate(a, b, multiply));
    printf("Square Sum: %d\n", operate(a, b, square_sum));

    return 0;
}