#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}