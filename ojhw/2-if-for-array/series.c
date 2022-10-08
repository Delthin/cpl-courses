#include <stdio.h>
#include <math.h>
int main()
{
    double x = 0.0, y = 0.0, z = 0.0;
    int n = 0;
    scanf("%lf%d", &x, &n);

    for (int i = 0; i <= n; i++)
    {
        z = 4.0 * pow(-1, i) * pow(x, 2 * i + 1) / (1.0 * (2 * i + 1));
        y += z;
    }
    printf("%.10f", y);
    return 0;
}