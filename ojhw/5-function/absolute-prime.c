#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool Judge(const int x);
int Reverse(int x);
int Digit(int x);

int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        sum += (Judge(i) && Judge(Reverse(i)));
    }
    printf("%d", sum);
    return 0;
}
bool Judge(const int x)
{
    for (int i = 2; i <= sqrt(x + 0.5); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int Reverse(int x)
{
    int new = 0;
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
    return new;
}

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