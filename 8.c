// (1!/1) + (2!/2) + (3!/3) + (4!/4) + (5!/5) + ... + (n!/n)
#include <stdio.h>
void Series(int range);
int factorial(int num);
int main()
{
    Series(5);
}
void Series(int range)
{
    int sum = 0;

    for (int i = 1; i <= range; i++)
    {
        sum += factorial(i) / i;
    }
    printf("%d\n", sum);
}
int factorial(int num)
{
    int pi = 1;

    for (int i = 1; i <= num; i++)
    {
        pi *= i;
    }
    return pi;
}