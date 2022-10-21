#include <stdio.h>
int main()
{
    int n = 0;
    int times = 0;
    scanf("%d", &n);
    int m = n;
    for (int i = 0; i <= 9; i++)
    {
        for (int k = 0; k <= 9; k++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (n - i - k - j <= 9 && n - i - k - j >= 0)
                {
                    times++;
                }
            }
        }
    }
    printf("%d", times);
    return 0;
}