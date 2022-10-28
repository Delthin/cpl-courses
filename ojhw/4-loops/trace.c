#include <stdio.h>
int main()
{
    int n = 0, m = 0, x0 = 0, y0 = 0;
    scanf("%d%d%d%d", &n, &m, &x0, &y0);
    char board1[51][51] = {0};
    char board2[53][53] = {0};
    int board3[53][53] = {0};
    int trace[2511] = {0};

    for (int row = 0; row < n; row++)
    {
        scanf("%s", &board1[row]);
    }

    for (int row = 0; row < n + 2; row++)
    {
        for (int col = 0; col < m + 2; col++)
        {
            if (row == 0 || row == n + 1 || col == 0 || col == m + 1)
            {
                board2[row][col] = '_';
            }
            else
            {
                board2[row][col] = board1[row - 1][col - 1];
            }
        }
    }

    int x = x0, y = y0;
    int ans = 0;
    int i = 1;

judge:
    board3[x][y] = 1;
    ans++;
    trace[i] = x;
    trace[i + 1] = y;
    i += 2;
    if ((board2[x - 1][y] == '#') && (board3[x - 1][y] == 0))
    {
        x--;
        goto judge;
    }
    if ((board2[x + 1][y] == '#') && (board3[x + 1][y] == 0))
    {
        x++;
        goto judge;
    }
    if ((board2[x][y - 1] == '#') && (board3[x][y - 1] == 0))
    {
        y--;
        goto judge;
    }
    if ((board2[x][y + 1] == '#') && (board3[x][y + 1] == 0))
    {
        y++;
        goto judge;
    }

    printf("%d\n", ans);
    for (int j = 0; j < ans; j++)
    {
        printf("%d %d\n", trace[2 * j + 1], trace[2 * j + 2]);
    }

    return 0;
}