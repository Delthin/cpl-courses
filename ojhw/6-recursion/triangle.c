#include <stdio.h>
#include <math.h>
#define XX 204
#define YY 102
void Paint(int n, int x, int y, char bd[][YY]);
int main()
{
    int n = 0;
    scanf("%d", &n);
    char board[XX][YY] = {0};
    int xm = pow(2, n + 1);
    int ym = pow(2, n);
    int x = pow(2, n);
    int y = 1;
    Paint(n, x, y, board);
    for (int i = 1; i <= ym; i++)
    {
        for (int j = 1; j <= xm; j++)
        {
            if (board[j][i] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%c", board[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
void Paint(int n, int x, int y, char bd[][YY])
{
    if (!n)
    {
        return;
    }
    else
    {
        bd[x][y] = '/';
        bd[x + 1][y] = '\\';
        bd[x - 1][y + 1] = '/';
        bd[x][y + 1] = '_';
        bd[x + 1][y + 1] = '_';
        bd[x + 2][y + 1] = '\\';
        Paint(n - 1, x, y, bd);
        Paint(n - 1, x - pow(2, n - 1), y + pow(2, n - 1), bd);
        Paint(n - 1, x + pow(2, n - 1), y + pow(2, n - 1), bd);
    }
}