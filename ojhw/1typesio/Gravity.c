#include <stdio.h>
int main()
{
    double m, R, Gra;
    const double G = 6.674e-11;
    const double M = 77.15;
    scanf("%lf%lf", &m, &R);
    Gra = G * M * m / R / R;
    printf("%.3e", Gra);

    return 0;
}