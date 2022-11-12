#include <stdio.h>

int comb(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int ans = comb(a - 1, b - 1);
    printf("%d", ans);

    return 0;
}
int comb(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    if (a == 1)
    {
        return 1;
    }
    if (a == b)
    {
        return 1;
    }
    return comb(a - 1, b - 1) + comb(a - 1, b);
}