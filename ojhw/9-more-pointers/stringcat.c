//从s1前往后读到空双重循环最快
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrcat(char *s1, char *s2, int len1, int len2);
int main()
{
    int T = 0;
    scanf("%d", &T);
    char *s1 = malloc(2002 * sizeof(s1));
    char *s2 = malloc(1001 * sizeof(s2));
    int len1 = 0;
    int len2 = 0;
    for (int i = 0; i < T; i++)
    {

        scanf("%s", s1);
        scanf("%s", s2);
        len1 = strlen(s1);
        len2 = strlen(s2);
        int m = mystrcat(s1, s2, len1, len2);
        for (int j = 0; j < len1 + m; j++)
        {
            printf("%c", *(s1 + j));
        }
        printf("\n");

        for (int j = 0; j < len1 + len2; j++)
        {
            *(s1 + j) = 0;
        }
        for (int k = 0; k < len2; k++)
        {
            *(s2 + k) = 0;
        }
    }

    return 0;
}
int mystrcat(char *s1, char *s2, int len1, int len2)

{
    int i = 0;
    if (len1 >= len2)
    {
        i = len2 - 1;
    }
    else
    {
        i = len1 - 1;
    }

    int m = -1;
    int j = 0;
    for (; i >= 0; i--)
    {
    next:
        if (*(s1 + len1 - 1) != *(s2 + i))
        {
            continue;
        }
        else
        {
            j = i;
            for (int k = 0; j >= 0 && k < len1; j--, k++)
            {
                if (*(s1 + len1 - k - 1) != *(s2 + j))
                {
                    i--;

                    goto next;
                }
            }
            m = i;
            goto copy;
        }
    }
copy:
    i = m;
    if (i == -1)
    {
        for (int j = 0; j < len2; j++)
        {
            *(s1 + len1 + j) = *(s2 + j);
        }
        return len2;
    }
    for (int j = 1; j < len2 - i; j++)
    {
        *(s1 + len1 + j - 1) = *(s2 + i + j);
    }
    return len2 - 1 - i;
}