#include <stdio.h>
#define N 1000000
int main()
{

    int n = 0, k = 0;
    scanf("%d", &n);
    char str1[N] = {0};
    char str2[N] = {0};
    scanf("\n%[^\n]", str1);
    scanf("%d", &k);

    for (int i = k - 1; i >= 0; i--)
    {
        str2[k - 1 - i] = str1[i];
    }

    for (int i = k; i < n; i++)
    {
        str2[n + k - 1 - i] = str1[i];
    }

    puts(str2);

    return 0;
}