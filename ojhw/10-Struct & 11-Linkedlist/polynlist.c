#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p1 = 0, p2 = 0;
    scanf("%d%d", &p1, &p2);
    char name[11];
    scanf("%s", name);
    int pp1[10001] = {0};
    int pp2[10001] = {0};
    for (int i = 0; i <= p1; i++)
    {
        scanf("%d", &pp1[p1 - i]);
    }
    for (int i = 0; i <= p2; i++)
    {
        scanf("%d", &pp2[p2 - i]);
    }
    int plus[10001] = {0};
    int minus[10001] = {0};
    int mult[20003] = {0};
    int max = 0;
    if (p1 >= p2)
    {
        max = p1;
    }
    else
    {
        max = p2;
    }

    for (int i = 0; i <= max; i++)
    {
        plus[i] = pp1[i] + pp2[i];
        minus[i] = pp1[i] - pp2[i];
    }
    for (int i = 0; i <= p1; i++)
    {
        for (int j = 0; j <= p2; j++)
        {
            mult[i + j] += pp1[i] * pp2[j];
        }
    }

    for (int i = max; i >= 0; i--)
    {
        if (i == max)
        {
            if (plus[i] == 0)
            {
                continue;
            }
            if (i == 1)
            {
                if (plus[i] == 1)
                {
                    printf("%s", name);
                    continue;
                }
                if (plus[i] == -1)
                {
                    printf("-%s", name);
                    continue;
                }
                if (plus[i] > 0)
                {
                    printf("%d%s", plus[i], name);
                    continue;
                }
                if (plus[i] < 0)
                {
                    printf("%d%s", plus[i], name);
                    continue;
                }
            }
            if (plus[i] == 1)
            {
                printf("%s^%d", name, i);
                continue;
            }
            if (plus[i] == -1)
            {
                printf("-%s^%d", name, i);
                continue;
            }
            if (plus[i] > 0)
            {
                printf("%d%s^%d", plus[i], name, i);
                continue;
            }
            if (plus[i] < 0)
            {
                printf("%d%s^%d", plus[i], name, i);
                continue;
            }
        }
        if (i == 1)
        {
            if (plus[i] == 1)
            {
                printf("+%s", name);
                continue;
            }
            if (plus[i] == -1)
            {
                printf("-%s", name);
                continue;
            }
            if (plus[i] > 0)
            {
                printf("+%d%s", plus[i], name);
                continue;
            }
            if (plus[i] < 0)
            {
                printf("%d%s", plus[i], name);
                continue;
            }
        }
        if (i == 0)
        {
            if (plus[i] == 0)
            {
                continue;
            }
            if (plus[i] > 0)
            {
                printf("+%d", plus[i]);
                continue;
            }
            if (plus[i] < 0)
            {
                printf("%d", plus[i]);
                continue;
            }
        }
        if (plus[i] == 0)
        {
            continue;
        }
        if (plus[i] == 1)
        {
            printf("+%s^%d", name, i);
            continue;
        }
        if (plus[i] == -1)
        {
            printf("-%s^%d", name, i);
            continue;
        }
        if (plus[i] > 0)
        {
            printf("+%d%s^%d", plus[i], name, i);
            continue;
        }
        if (plus[i] < 0)
        {
            printf("%d%s^%d", plus[i], name, i);
            continue;
        }
    }
    printf("\n");
    for (int i = max; i >= 0; i--)
    {
        if (i == max)
        {
            if (minus[i] == 0)
            {
                continue;
            }
            if (i == 1)
            {
                if (minus[i] == 1)
                {
                    printf("%s", name);
                    continue;
                }
                if (minus[i] == -1)
                {
                    printf("-%s", name);
                    continue;
                }
                if (minus[i] > 0)
                {
                    printf("%d%s", minus[i], name);
                    continue;
                }
                if (minus[i] < 0)
                {
                    printf("%d%s", minus[i], name);
                    continue;
                }
            }
            if (minus[i] == 1)
            {
                printf("%s^%d", name, i);
                continue;
            }
            if (minus[i] == -1)
            {
                printf("-%s^%d", name, i);
                continue;
            }
            if (minus[i] > 0)
            {
                printf("%d%s^%d", minus[i], name, i);
                continue;
            }
            if (minus[i] < 0)
            {
                printf("%d%s^%d", minus[i], name, i);
                continue;
            }
        }
        if (i == 1)
        {
            if (minus[i] == 1)
            {
                printf("+%s", name);
                continue;
            }
            if (minus[i] == -1)
            {
                printf("-%s", name);
                continue;
            }
            if (minus[i] > 0)
            {
                printf("+%d%s", minus[i], name);
                continue;
            }
            if (minus[i] < 0)
            {
                printf("%d%s", minus[i], name);
                continue;
            }
        }
        if (i == 0)
        {
            if (minus[i] == 0)
            {
                continue;
            }
            if (minus[i] > 0)
            {
                printf("+%d", minus[i]);
                continue;
            }
            if (minus[i] < 0)
            {
                printf("%d", minus[i]);
                continue;
            }
        }
        if (minus[i] == 0)
        {
            continue;
        }
        if (minus[i] == 1)
        {
            printf("+%s^%d", name, i);
            continue;
        }
        if (minus[i] == -1)
        {
            printf("-%s^%d", name, i);
            continue;
        }
        if (minus[i] > 0)
        {
            printf("+%d%s^%d", minus[i], name, i);
            continue;
        }
        if (minus[i] < 0)
        {
            printf("%d%s^%d", minus[i], name, i);
            continue;
        }
    }
    printf("\n");
    for (int i = p1 + p2; i >= 0; i--)
    {
        if (i == p1 + p2)
        {
            if (mult[i] == 0)
            {
                continue;
            }
            if (i == 1)
            {
                if (mult[i] == 1)
                {
                    printf("%s", name);
                    continue;
                }
                if (mult[i] == -1)
                {
                    printf("-%s", name);
                    continue;
                }
                if (mult[i] > 0)
                {
                    printf("%d%s", mult[i], name);
                    continue;
                }
                if (mult[i] < 0)
                {
                    printf("%d%s", mult[i], name);
                    continue;
                }
            }
            if (mult[i] == 1)
            {
                printf("%s^%d", name, i);
                continue;
            }
            if (mult[i] == -1)
            {
                printf("-%s^%d", name, i);
                continue;
            }
            if (mult[i] > 0)
            {
                printf("%d%s^%d", mult[i], name, i);
                continue;
            }
            if (mult[i] < 0)
            {
                printf("%d%s^%d", mult[i], name, i);
                continue;
            }
        }
        if (i == 1)
        {
            if (mult[i] == 1)
            {
                printf("+%s", name);
                continue;
            }
            if (mult[i] == -1)
            {
                printf("-%s", name);
                continue;
            }
            if (mult[i] > 0)
            {
                printf("+%d%s", mult[i], name);
                continue;
            }
            if (mult[i] < 0)
            {
                printf("%d%s", mult[i], name);
                continue;
            }
        }
        if (i == 0)
        {
            if (mult[i] == 0)
            {
                continue;
            }
            if (mult[i] > 0)
            {
                printf("+%d", mult[i]);
                continue;
            }
            if (mult[i] < 0)
            {
                printf("%d", mult[i]);
                continue;
            }
        }
        if (mult[i] == 0)
        {
            continue;
        }
        if (mult[i] == 1)
        {
            printf("+%s^%d", name, i);
            continue;
        }
        if (mult[i] == -1)
        {
            printf("-%s^%d", name, i);
            continue;
        }
        if (mult[i] > 0)
        {
            printf("+%d%s^%d", mult[i], name, i);
            continue;
        }
        if (mult[i] < 0)
        {
            printf("%d%s^%d", mult[i], name, i);
            continue;
        }
    }
    return 0;
}