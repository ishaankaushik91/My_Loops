// Bubble Sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int PrimeCheck(int number);
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        printf("%d\t", A[i]);
    }
    printf("\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[j] > A[j + 1])
            {
                A[j] = A[j] ^ A[j + 1];
                A[j + 1] = A[j] ^ A[j + 1];
                A[j] = A[j] ^ A[j + 1];
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}