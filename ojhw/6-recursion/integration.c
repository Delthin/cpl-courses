#include <stdio.h>
#include <math.h>
#define LEN 22
double Func(double x, int arr[], int n, int p);
double Sum(double a, double b, int arr[], int n, int p);
double Inte(double a, double b, int arr[], int n, int p, double e);
int main()
{
    int n = 0, p = 0;
    int an[LEN] = {0};
    double a = 0, b = 0;
    double e = 0.0001;
    scanf("%d%d", &n, &p);
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &an[i]);
    }
    scanf("%lf%lf", &a, &b);
    printf("%f", Inte(a, b, an, n, p, e));
    return 0;
}
double Func(double x, int arr[], int n, int p)
{
    double sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum += arr[i] * pow(x, i);
    }
    return pow(sum, p);
}
double Sum(double a, double b, int arr[], int n, int p)
{
    return ((4 * Func((a + b) / 2, arr, n, p) + Func(a, arr, n, p) + Func(b, arr, n, p)) / 6 * (b - a));
}
double Inte(double a, double b, int arr[], int n, int p, double e)
{
    double mid = (a + b) / 2;
    double S = Sum(a, b, arr, n, p);
    double SL = Sum(a, mid, arr, n, p);
    double SR = Sum(mid, b, arr, n, p);
    if (fabs(SL + SR - S) <= 15 * e)
    {
        return SL + SR + ((SL + SR - S) / 15);
    }
    return Inte(a, mid, arr, n, p, e / 2) + Inte(mid, b, arr, n, p, e / 2);
}