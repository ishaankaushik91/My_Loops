// in Array 100 random numbers & print primes in it under 50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        int check = 0;
        for (int j = 2; j < A[i]; j++)
        {
            if (A[i] % j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0 && A[i] < 50)
        {
            printf("%d\t", A[i]);
        }
    }

    return 0;
}