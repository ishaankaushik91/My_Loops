// Palindromic Primes
#include <stdio.h>
int PrimeCheck(int number);
int Plaindrome(int number);
int main()
{
    for (int i = 2; i <= 50000; i++)
    {
        if (Plaindrome(i) == 0 && PrimeCheck(i) == 0)
        {
            printf("%d\n", i);
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
int Plaindrome(int number)
{
    int rev = 0, rem, original = number;

    while (number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= -10;
    }

    if (original == rev)
    {
        return 0;
    }
    return -1;
}