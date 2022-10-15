#include <stdio.h>
#include <math.h>
int main()
{
    int len = 0, N = 0;

    char str1[31] = {0};
    int str2[31] = {0};
    scanf("%d %d", &len, &N);
    scanf("%s", str1);

    for (int i = 0; i < len; i++)
    {
        if (str1[i] == '0')
        {
            str2[len - i - 1] = 0;
        }
        if (str1[i] == '1')
        {
            str2[len - i - 1] = 1;
        }
        if (str1[i] == '2')
        {
            str2[len - i - 1] = 2;
        }
        if (str1[i] == '3')
        {
            str2[len - i - 1] = 3;
        }
        if (str1[i] == '4')
        {
            str2[len - i - 1] = 4;
        }
        if (str1[i] == '5')
        {
            str2[len - i - 1] = 5;
        }
        if (str1[i] == '6')
        {
            str2[len - i - 1] = 6;
        }
        if (str1[i] == '7')
        {
            str2[len - i - 1] = 7;
        }
        if (str1[i] == '8')
        {
            str2[len - i - 1] = 8;
        }
        if (str1[i] == '9')
        {
            str2[len - i - 1] = 9;
        }
        if (str1[i] == 'A')
        {
            str2[len - i - 1] = 10;
        }
        if (str1[i] == 'B')
        {
            str2[len - i - 1] = 11;
        }
        if (str1[i] == 'C')
        {
            str2[len - i - 1] = 12;
        }
        if (str1[i] == 'D')
        {
            str2[len - i - 1] = 13;
        }
        if (str1[i] == 'E')
        {
            str2[len - i - 1] = 14;
        }
        if (str1[i] == 'F')
        {
            str2[len - i - 1] = 15;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (str2[i] >= N || str1[i] >= 'G')
        {
            printf("Error");
            goto end;
        }
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += (str2[i] * pow(N, i));
    }
    printf("%d", sum);
end:
    return 0;
}