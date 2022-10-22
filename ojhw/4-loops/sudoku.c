#include <stdio.h>
#define SIZE 9
int main()
{
    int board[SIZE][SIZE] = {0};
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            scanf("%d", &board[row][col]);
        }
    }
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (board[row][col] > 9)
            {
                printf("NO");
                goto end;
            }
        }
    }

    int times = 0;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            for (int i = 0; i < SIZE; i++)
            {
                times += (board[row][i] == board[row][col]);
            }
            for (int j = 0; j < SIZE; j++)
            {
                times += (board[j][col] == board[row][col]);
            }
            for (int k = 0; k < (SIZE / 3); k++)
            {
                for (int t = 0; t < (SIZE / 3); t++)
                {
                    if (board[3 * (row / 3) + k][3 * (col / 3) + t] == board[row][col])
                    {
                        times++;
                    }
                }
            }
            if (times > 3)
            {
                printf("NO");
                goto end;
            }
            times = 0;
        }
    }
    printf("YES");
end:
    return 0;
}