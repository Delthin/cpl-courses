#include <stdio.h>
#define SIZE 2000
int MaxDiJiang(const int array[], const int len);
void SearchAndSwap(int array[], const int len, const int m);
void Copy(int array[], int arraynew[], const int len);
void Print(const int array[], const int len);
int main()
{
    int n = 0;
    int array[SIZE + 1] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int m = MaxDiJiang(array, n);

    SearchAndSwap(array, n, m);
    Print(array, n);

    return 0;
}
int MaxDiJiang(const int array[], const int len)
{
    int i = len - 1;
    int m = 1;
    while (i > 0)
    {
        if (array[i] < array[i - 1])
        {
            i--;
            m++;
        }
        else
        {
            break;
        }
    }
    return m;
}
void SearchAndSwap(int array[], const int len, const int m)
{
    int temp = 0;
    for (int i = len - 1; i > len - m - 1; i--)
    {
        if (array[i] > array[len - m - 1])
        {
            temp = array[len - m - 1];
            array[len - m - 1] = array[i];
            array[i] = temp;
            break;
        }
    }
    int arraynew[SIZE + 1] = {0};
    Copy(array, arraynew, len);
    for (int i = len - m; i < len; i++)
    {
        array[i] = arraynew[2 * len - i - m - 1];
    }
}

void Copy(int array[], int arraynew[], const int len)
{
    for (int i = 0; i < len; i++)
    {
        arraynew[i] = array[i];
    }
}

void Print(const int array[], const int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
}