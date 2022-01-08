// Merge 2 random Arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    // rand() % 100;
    int A[10], B[10], temp;

    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        B[i] = rand() % 50;
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", B[i]);
    }
    return 0;
}