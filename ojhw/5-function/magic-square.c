#include <stdio.h>
#include <stdbool.h>
#define SIZE 999

void Print(const int array[][SIZE + 3], const int n);
int main()
{
    int n = 0;
    scanf("%d", &n);
    int array[SIZE + 3][SIZE + 3] = {0};
    array[1][n / 2 + 1] = 1;
    int row = 1;
    int col = n / 2 + 1;
    for (int i = 2; i <= n * n; i++)
    {
        if (row == 1)
        {
            if (col == n)
            {
                if (array[n][1] != 0)
                {
                    array[row + 1][col] = i;
                    row++;
                }
                else
                {
                    array[n][1] = i;
                    row = n;
                    col = 1;
                }
            }
            else
            {
                if (array[n][col + 1] != 0)
                {
                    array[row + 1][col] = i;
                    row++;
                }
                else
                {
                    array[n][col + 1] = i;
                    row = n;
                    col++;
                }
            }
        }
        else if (col == n)
        {
            if (array[row - 1][1] != 0)
            {
                if (row == n)
                {
                    array[1][col] = i;
                    row = 1;
                }
                else
                {
                    array[row + 1][col] = i;
                    row++;
                }
            }
            else
            {
                array[row - 1][1] = i;
                row--;
                col = 1;
            }
        }
        else if (array[row - 1][col + 1] != 0)
        {
            if (row == n)
            {
                array[1][col] = i;
                row = 1;
            }
            else
            {
                array[row + 1][col] = i;
                row++;
            }
        }
        else
        {
            array[row - 1][col + 1] = i;
            row--;
            col++;
        }
    }
    Print(array, n);
    return 0;
}

void Print(const int array[][SIZE + 3], const int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}