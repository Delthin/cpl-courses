#include <stdio.h>
#include <math.h>
int Digit(int x)
{
    int i = 0;
    do
    {
        x /= 10;
        i++;
    } while (x != 0);
    return i;
}
int main()
{
    int new = 0;
    int x = 1241432;
    int a = 0;
    int b = 0;
    int digit = Digit(x);
    for (int i = 1; i <= digit; i++)
    {
        a = pow(10, digit - i);
        b = pow(10, i - 1);
        new += (x / a * b);
        x -= (x / a * a);
    }
    return 0;
}