#include <stdio.h>
#include <math.h>
//pow在里面
int main()
{
    int radius = 100;
    const double PI = 3.14159;
    double surface_area = 4 * PI * pow(radius,2); 
//pow次方
    double volume = 4.0 / 3 * PI * pow(radius,3);
//4/3=1 只能4.0/3
    printf("%-15.4f:surface_area\n%-15.4f:volume",surface_area, volume);
//%-15.4f十五位四位小数 左对齐-

    return 0;
}
