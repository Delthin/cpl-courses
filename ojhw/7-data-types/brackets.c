#include <stdio.h>
#include <string.h>
#define NUM 100001
int main()
{
    int T = 0;
    int n = 0;
    int topnum = 0;
    int left = 0, right = 0;
    scanf("%d", &T);
    char content[NUM] = {0};
    int tops[NUM] = {0};
    int put[31] = {0};
    int p = 0;
    int len = 0;
    for (int ct = 0; ct < T; ct++)
    {
        left = 0;
        topnum = 0;
        scanf("%s", content);
        n = strlen(content);
        for (int i = 0; i < n - 1; i++)
        {
            if (content[i] == content[i + 1] - 1 || content[i] == content[i + 1] - 2)
            {
                tops[topnum] = i;
                topnum++;
            }
        }
        if (!topnum || n % 2)
        {
            put[p] = 1;
            p++;
            goto Rejudge;
        }
        right = 2 * tops[0] + 1;
        for (int i = 0; i < topnum; i++)
        {
            len = right - left + 1;
            if (len % 2)
            {
                put[p] = 1;
                p++;
                goto Rejudge;
            }
            len /= 2;
            for (int j = 0; j < len; j++)
            {
                if (!(content[tops[i] - j] == content[tops[i] + j + 1] - 1 ||
                      content[tops[i] - j] == content[tops[i] + j + 1] - 2))
                {
                    put[p] = 1;
                    p++;
                    goto Rejudge;
                }
            }
            if (i == topnum - 1 && right < n - 1)
            {
                put[p] = 1;
                p++;
                goto Rejudge;
            }
            left = right + 1;
            right = 2 * tops[i + 1] - right;
        }
        put[p] = 2;
        p++;
    Rejudge:
        for (int i = 0; i < n; i++)
        {
            content[i] = 0;
        }
    }
    for (int i = 0; i < T; i++)
    {
        if (put[i] == 1)
        {
            printf("False\n");
        }
        if (put[i] == 2)
        {
            printf("True\n");
        }
    }

    return 0;
}