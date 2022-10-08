#include <stdio.h>
int main()
{

    int n = 0;
    scanf("%d", &n);
    int d = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            d *= k;
            d %= 10007;
        }
        sum += d;
        sum %= 10007;
        d = 1;
    }
    printf("%d", sum);

    return 0;
}