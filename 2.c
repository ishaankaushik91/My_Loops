// Factorial
#include <stdio.h>
int factorial(int*);
int main()
{
    int num = 5;
    printf("%d\n", factorial(&num));
    return 0;
}
int factorial(int *number)
{
    int pi = 1;

    for (int i = 1; i <= *number; i++)
    {
        pi *= i;
    }
    return pi;
}