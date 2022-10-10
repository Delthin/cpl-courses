144 曹政 12 : 30 : 21
#include <stdio.h>
    int a[10000005];
int read()
{
    char c = getchar();
    int k = 1;
    while (c != 10)
    {
        a[k] = c;
        c = getchar();
        k++;
    }
}
int main()
{
    int n, k;
    scanf("%d", &n);
    char c = getchar();
    read();
    scanf("%d", &k);
    for (int i = k; i >= 1; i--)
    {
        printf("%c", a[i]);
    }
    for (int i = n; i > k; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}

144 曹政 12 : 30 : 32
#include <stdio.h>
    int a[10000005];
int read()
{
    char c = getchar();
    int k = 1;
    while (c != 10)
    {
        a[k] = c;
        c = getchar();
        k++;
    }
}
int main()
{
    int n, k;
    scanf("%d\n", &n);
    read();
    scanf("%d", &k);
    for (int i = k; i >= 1; i--)
    {
        printf("%c", a[i]);
    }
    for (int i = n; i > k; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}
