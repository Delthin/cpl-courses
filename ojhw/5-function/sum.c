#include <stdio.h>
#include <math.h>

void SumPrint(int n, int t);
int main()
{
    int n = 0, t = 0;
    scanf("%d%d", &n, &t);
    SumPrint(n, t);
    return 0;
}
void SumPrint(int n, int t)
{
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            temp += t * pow(10, j);
        }

        sum += temp;
        temp = 0;
    }
    printf("%d", sum);
}