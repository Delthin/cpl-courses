#include <stdio.h>
int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    int remain = n;
    int stat[501] = {0};
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        stat[i] = 1;
    }
    while (remain > 1)
        for (int i = 1; i <= n; i++)
        {
            if (stat[i] == 1)
            {
                if (count == k)
                {
                    stat[i] = 0;
                    remain--;
                    count = 1;
                }
                else
                {
                    count++;
                }
            }
        }

    for (int i = 1; i <= n; i++)
    {
        if (stat[i] == 1)
        {
            printf("%d", i);
        }
    }
    return 0;
}