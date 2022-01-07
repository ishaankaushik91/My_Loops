// Calculating average of numbers until -1 is encountered
#include <stdio.h>
int Avg(int number);
int main()
{
    int a = 0;
    printf("%d\n", Avg(a));
    return 0;
}
int Avg(int number)
{
    int sum = 0, count = 0;
    while (number != -1)
    {
        printf("Enter a number :\n");
        scanf("%d", &number);
        sum += number;
        count++;
    }

    return sum / count;
}