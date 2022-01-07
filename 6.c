// Number Pattern
#include <stdio.h>
void Pattern();
int main()
{
    Pattern();
    return 0;
}
void Pattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}