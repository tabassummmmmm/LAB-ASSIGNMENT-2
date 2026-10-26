#include <stdio.h>

int main()
{
    int N, i;
    long long factorial = 1;

    printf("Enter a non-negative integer (0 to 20): ");
    scanf("%d", &N);

    if (N < 0 || N > 20)
    {
        printf("Invalid input");
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial = %lld", factorial);
    }

    return 0;
}
