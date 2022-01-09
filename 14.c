// Primes in a Matrix (non Functional)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
            int check = 0;
            A[i][j] = rand() % 100;

            for (int k = 2; k < A[i][j]; k++)
            {
                if (A[i][j] % k == 0)
                {
                    check = 1;
                    break;
                }
            }

            if (check == 0)
            {
                printf("%d\t", A[i][j]);
            }
        }
    }
    return 0;
}