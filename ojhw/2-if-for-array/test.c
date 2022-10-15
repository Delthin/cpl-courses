#include <stdio.h>
#include <math.h>
int route1(int x, int y)
{
    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
            printf("R");
    }
    if (x < 0)
    {
        for (int i = 1; i <= -x; i++)
            printf("L");
    }
    if (y > 0)
    {
        for (int i = 1; i <= y; i++)
            printf("U");
    }
    if (y < 0)
    {
        for (int i = 1; i <= -y; i++)
            printf("D");
    }
    return 0;
}
int route2(int x, int y)
{
    if (y > 0)
    {
        for (int i = 1; i <= y; i++)
            printf("U");
    }
    if (y < 0)
    {
        for (int i = 1; i <= -y; i++)
            printf("D");
    }
    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
            printf("R");
    }
    if (x < 0)
    {
        for (int i = 1; i <= -x; i++)
            printf("L");
    }
    return 0;
}
int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (x1 == x2 && x1 == x3 && ((y1 < y3 && y3 < y2) || (y1 > y3 && y3 > y2)))
    {
        printf("%d\n", abs(x1 - x2) + abs(y1 - y2) + 2);
        printf("L");
        route1(0, y2 - y1);
        printf("R");
        return 0;
    }
    if (y1 == y2 && y1 == y3 && ((x1 < x3 && x3 < x2) || (x1 > x3 && x3 > x2)))
    {
        printf("%d\n", abs(x1 - x2) + abs(y1 - y2) + 2);
        printf("U");
        route1(x2 - x1, 0);
        printf("D");
        return 0;
    }
    printf("%d\n", abs(x1 - x2) + abs(y1 - y2));
    if (x3 == x1 || y3 == y2)
    {
        route2(x2 - x1, y2 - y1);
    }
    else
    {
        route1(x2 - x1, y2 - y1);
    }
    return 0;
}