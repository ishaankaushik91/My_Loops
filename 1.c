// Sum from m to n
#include <stdio.h>
int Summation(int*, int*);
int main()
{
    int a = 5, b = 10;
    printf("%d\n",Summation(&a, &b));
    return 0;
}
int Summation(int *m, int *n)
{
    int sum = 0;
    for (int i = *m; i <= *n; i++)
    {
        sum += i;
    }
    return sum;
}