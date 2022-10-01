#include <stdio.h>
int main()
{
    int day, year, hour, minute, second;
    char month[15];
    char weekday[15];
    scanf("%s%d%d%s%d%d%d", month, &day, &year, weekday, &hour, &minute, &second);
    printf("%.3s %.3s %.2d %.2d:%.2d:%.2d %.4d ", weekday, month, day, hour, minute, second, year);

    return 0;
}