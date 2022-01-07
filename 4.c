// Display cube n square of square of n natural nos.
#include <stdio.h>
void Display(int range);
int main()
{
    Display(5);
    return 0;
}
void Display(int range)
{   
    printf("Square\tCube\n\n");
    for (int i = 1; i <= range; i++)
    {
        printf("%d\t%d\n", i * i, i * i * i);
    }
}