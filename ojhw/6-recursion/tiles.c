#include <stdio.h>

int Sum(int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", Sum(n));

    return 0;
}
int Sum(int n)
{
    if (n <= 3)
    {
        return n;
    }
    return Sum(n - 1) + Sum(n - 2);
}