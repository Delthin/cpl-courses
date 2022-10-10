#include <stdio.h>
#define N 10000000

int main()
{

    long long int n = 0, k = 0;
    scanf("%lld", &n);
    char str1[N] = {0};
    char str2[N] = {0};
    getchar();
    scanf("%[^\n]", str1);

    scanf("%lld", &k);

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