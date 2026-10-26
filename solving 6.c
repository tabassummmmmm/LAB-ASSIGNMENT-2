#include <stdio.h>
int main()
{
    int N, cnt = 0;
    scanf("%d", &N);
    if (N < 0)
    {
        N = -N;
    }

    if (N == 0)
    {
        cnt = 1;
    }
    else
    {
        while (N > 0)
        {
            N = N / 10;
            cnt++;
        }
    }

    printf("Number of digits = %d", cnt);

    return 0;
}