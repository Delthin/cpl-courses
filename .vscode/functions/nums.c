#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    return 0;
}
bool JudgePrime(const int x)
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

/*int Reverse(int x)
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
}*/
int reverse(int n)
{
    int ans = 0;
    while (n)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
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
