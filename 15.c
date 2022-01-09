// Primes in a Matrix (Functional)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int PrimeCheck(int number);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = rand() % 100;
            if (PrimeCheck(A[i][j]) == 0)
            {
                printf("%d\t", A[i][j]);
            }
        }
    }
    return 0;
}
int PrimeCheck(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return -1;
        }
    }
    return 0;
}