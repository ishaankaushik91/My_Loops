// Frequency of each element in an Array of random integers
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
    }

    for (int i = 0; i < 10; i++)
    {
        int frequency = 0;
        for (int j = 0; j < 10; j++)
        {
            if (A[i] == A[j])
            {
                frequency++;
            }
        }
        printf("Frequency of %d = %d\n", A[i], frequency);
    }

    return 0;
}