#include <stdio.h>
#include <string.h>
#define STR_LEN 1000
int main()
{
    int n = 0;
    scanf("%d", &n);
    char str_ori[STR_LEN + 1] = {0};
    char str1[STR_LEN + 7] = {0};
    char str2[STR_LEN + 7] = {0};
    scanf("%s", str_ori);
    int len = strlen(str_ori);

    for (int i = 0; i < len + 6; i++)
    {
        if (i < 3 || i > len + 2)
        {
            str1[i] = '.';
        }
        else
        {
            str1[i] = str_ori[i - 3];
        }
    }
    int neiA = 0, neiB = 0;
    strcpy(str2, str1);
    for (int k = 0; k < n; k++)
    {
        for (int i = 3; i < len + 3; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (str1[i - j] == 'A')
                {
                    neiA++;
                }
                if (str1[i + j] == 'A')
                {
                    neiA++;
                }
                if (str1[i - j] == 'B')
                {
                    neiB++;
                }
                if (str1[i + j] == 'B')
                {
                    neiB++;
                }
            }
            if (str1[i] == '.')
            {
                if (neiA >= 2 && neiA <= 4 && neiB == 0)
                {
                    str2[i] = 'A';
                }
                if (neiB >= 2 && neiB <= 4 && neiA == 0)
                {
                    str2[i] = 'B';
                }
            }
            if (str1[i] == 'A')
            {
                if (neiB > 0 || neiA >= 5 || neiA <= 1)
                {
                    str2[i] = '.';
                }
            }
            if (str1[i] == 'B')
            {
                if (neiA > 0 || neiB >= 5 || neiB <= 1)
                {
                    str2[i] = '.';
                }
            }
            neiA = 0;
            neiB = 0;
        }
        strcpy(str1, str2);
    }
    for (int i = 0; i < len; i++)
    {
        str_ori[i] = str1[i + 3];
    }

    printf("%s", str_ori);

    return 0;
}