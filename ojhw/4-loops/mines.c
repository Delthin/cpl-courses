#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    char board1[101][101] = {0};
    char board2[103][103] = {0};
    char board3[101][101] = {0};

    for (int row = 0; row < n; row++)
    {
        scanf("%s", &board1[row]);
    }

    for (int row = 0; row < n + 2; row++)
    {
        for (int col = 0; col < n + 2; col++)
        {
            if (row == 0 || row == n + 1 || col == 0 || col == n + 1)
            {
                board2[row][col] = 'o';
            }
            else
            {
                board2[row][col] = board1[row - 1][col - 1];
            }
        }
    }

    int times = 0;
    for (int row = 1; row < n + 1; row++)
    {
        for (int col = 1; col < n + 1; col++)
        {
            if (board2[row][col] == '*')
            {
                board3[row - 1][col - 1] = '*';
            }
            else
            {
                for (int k = 0; k < 3; k++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        if (board2[row - 1 + k][col - 1 + j] == '*')
                        {
                            times++;
                        }
                    }
                }
                board3[row - 1][col - 1] = times + 48;
            }
            times = 0;
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("%c", board3[row][col]);
        }
        printf("\n");
    }

    return 0;
}