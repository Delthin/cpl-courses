#include <stdio.h>
#include <math.h>
int main()
{

    int rmb, a50, a20, a10, a5, a1;
    scanf("%d", &rmb);

    a50 = rmb / 50;
    a20 = (rmb - 50 * a50) / 20;
    a10 = (rmb - 50 * a50 - 20 * a20) / 10;
    a5 = (rmb - 50 * a50 - 20 * a20 - 10 * a10) / 5;
    a1 = rmb - 50 * a50 - 20 * a20 - 10 * a10 - a5 * 5;

    printf("%d\n%d\n%d\n%d\n%d\n", a50, a20, a10, a5, a1);

    return 0;
}