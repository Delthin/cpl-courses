#include <stdio.h>
#include <stdbool.h>
int JudgeScale(const int p, const int q, const int r);
int main()
{
    int p = 0, q = 0, r = 0;
    scanf("%d%d%d", &p, &q, &r);
    int ans = JudgeScale(p, q, r);
    printf("%d", ans);
    return 0;
}
int JudgeScale(const int p, const int q, const int r)
{
    int a = r / 10;
    int b = r - r / 10 * 10;
    for (int i = 2; i <= 40; i++)
    {
        if (p * q == a * i + b && a < i && b < i)
        {
            return i;
        }
    }
    return 0;
}