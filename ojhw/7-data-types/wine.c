#include <stdio.h>
#define NUM 10001

int Max(int v[], int w[], int len);
int main()
{
    int n = 0;
    int l = 0;
    int v[NUM] = {0};
    int w[NUM] = {0};
    scanf("%d%d", &n, &l);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
    }

    int exp = Max(v, w, n);
    int ans = 0;
    while (l)
    {
        if (w[exp])
        {
            w[exp]--;
            l--;
            ans += v[exp];
        }
        else
        {
            v[exp] = 0;
            exp = Max(v, w, n);
        }
    }
    printf("%d", ans);
    return 0;
}
int Max(int v[], int w[], int len)
{
    int max = v[0];
    int j = 0;
    for (int i = 1; i < len; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            j = i;
        }
    }
    return j;
}