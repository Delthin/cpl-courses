#include <stdio.h>
int main()
{

    int bits[2001] = {0};
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % i == 0)
            {
                if (bits[j] == 0)
                {
                    bits[j] = 1;
                }
                else
                    bits[j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (bits[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}