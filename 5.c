// Pyramid
#include <stdio.h>
void pattern();
int main()
{
    pattern();
    return 0;
}
void pattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}