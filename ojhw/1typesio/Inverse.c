#include <stdio.h>
int main()
{
    int num, a, b, c, d, e;
    scanf("%d", &num);
    a = num / 10000;
    num -= (a * 10000);
    b = num / 1000;
    num -= (b * 1000);
    c = num / 100;
    num -= (c * 100);
    d = num / 10;
    e = num - d * 10;

    printf("%d%d%d%d%d", c, b, a, e, d);

    return 0;
}