#include <stdio.h>
int Jiangjun();
int kmove(int x, int y, char board[][10]);
int bmove(int x, int y, char board[][10]);
int emove(int x, int y, char board[][10]);
int hmove(int x, int y, char board[][10]);
int cmove(int x, int y, char board[][10]);
int gmove(int x, int y, char board[][10]);
int smove(int x, int y, char board[][10]);
int ki = 0, kj = 0;
int main()
{
    int T = 0;
    scanf("%d", &T);
    while (T > 0)
    {
        char board[6][10] = {0};
        for (int i = 1; i <= 5; i++)
        {
            scanf("%s", &board[i]);
        }
        ki = 0, kj = 0;
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (board[i][j] == 'k')
                {
                    ki = i;
                    kj = j;
                }
            }
        }
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (board[i][j] == 's')
                {
                    if (smove(i, j, board))
                    {
                        goto end;
                    }
                }
            }
        }
        printf("YES");
        goto eend;
    end:
        printf("NO");
    eend:
        T--;
    }

    return 0;
}
int kmove(int x, int y, char board[][10])
{
    if ((board[x - 1][y] == '#' || board[x - 1][y] == 's') && x > 1)
    {
        board[x - 1][y] = 'k';
        board[x][y] = '#';
        if (!Jiangjun(x - 1, y, board))
        {
            board[x - 1][y] = '#';
            board[x][y] = 'k';
            return 0;
        }
        else
        {
            board[x - 1][y] = '#';
            board[x][y] = 'k';
        }
    }
    if ((board[x + 1][y] == '#' || board[x + 1][y] == 's') && x < 3)
    {
        board[x + 1][y] = 'k';
        board[x][y] = '#';
        if (!Jiangjun(x + 1, y, board))
        {
            board[x + 1][y] = '#';
            board[x][y] = 'k';
            return 0;
        }
        else
        {
            board[x + 1][y] = '#';
            board[x][y] = 'k';
        }
    }
    if ((board[x][y + 1] == '#' || board[x][y + 1] == 's') && y < 6)
    {
        board[x][y + 1] = 'k';
        board[x][y] = '#';
        if (!Jiangjun(x - 1, y, board))
        {
            board[x][y + 1] = '#';
            board[x][y] = 'k';
            return 0;
        }
        else
        {
            board[x][y + 1] = '#';
            board[x][y] = 'k';
        }
    }
    if ((board[x][y - 1] == '#' || board[x][y - 1] == 's') && y > 4)
    {
        board[x][y - 1] = 'k';
        board[x][y] = '#';
        if (!Jiangjun(x - 1, y, board))
        {
            board[x][y - 1] = '#';
            board[x][y] = 'k';
            return 0;
        }
        else
        {
            board[x][y - 1] = '#';
            board[x][y] = 'k';
        }
    }
    return 1;
}
int bmove(int x, int y, char board[][10]) {}
int emove(int x, int y, char board[][10]) {}
int hmove(int x, int y, char board[][10]) {}
int cmove(int x, int y, char board[][10]) {}
int gmove(int x, int y, char board[][10]) {}
int smove(int x, int y, char board[][10])
{
    if (board[x - 1][y] == '#' && x > 1)
    {
        board[x - 1][y] = 's';
        board[x][y] = '#';
        if (kmove(ki, kj, board))
        {
            return 1;
        }
        else
        {
            board[x - 1][y] = '#';
            board[x][y] = 's';
        }
    }
    if (board[x + 1][y] == '#' && x < 5)
    {
        board[x + 1][y] = 's';
        board[x][y] = '#';
        if (kmove(ki, kj, board))
        {
            return 1;
        }
        else
        {
            board[x + 1][y] = '#';
            board[x][y] = 's';
        }
    }
    if (board[x][y + 1] == '#' && y < 9)
    {
        board[x][y + 1] = 's';
        board[x][y] = '#';
        if (kmove(ki, kj, board))
        {
            return 1;
        }
        else
        {
            board[x][y + 1] = '#';
            board[x][y] = 's';
        }
    }
    if (board[x][y - 1] == '#' && y > 1)
    {
        board[x][y - 1] = 's';
        board[x][y] = '#';
        if (kmove(ki, kj, board))
        {
            return 1;
        }
        else
        {
            board[x][y - 1] = '#';
            board[x][y] = 's';
        }
    }
    return 0;
}
int Jiangjun(int x, int y, char board[][10])
{
    // s
    if (board[x - 1][y] == 's' ||
        board[x + 1][y] == 's' ||
        board[x][y + 1] == 's' ||
        board[x][y - 1] == 's')
    {
        return 1;
    }
    // h
    if ((board[x - 2][y - 1] == 'h' && board[x - 1][y - 1] == '#') ||
        (board[x + 2][y - 1] == 'h' && board[x + 1][y - 1] == '#') ||
        (board[x - 2][y + 1] == 'h' && board[x - 1][y + 1] == '#') ||
        (board[x + 2][y + 1] == 'h' && board[x + 1][y + 1] == '#') ||
        (board[x - 1][y - 2] == 'h' && board[x - 1][y - 1] == '#') ||
        (board[x - 1][y + 2] == 'h' && board[x - 1][y + 1] == '#') ||
        (board[x + 1][y - 2] == 'h' && board[x + 1][y - 1] == '#') ||
        (board[x + 1][y + 2] == 'h' && board[x + 1][y + 1] == '#'))
    {
        return 1;
    }
    // g and c
    for (int i = 1; i < y; i++)
    {
        int tmp = 0;
        if (board[x][i] == 'g' || board[x][i] == 'c')
        {
            for (int j = i + 1; j < y; j++)
            {
                if (board[x][j] != '#')
                {
                    tmp++;
                }
            }
            if (tmp == 1 && board[x][i] == 'g')
            {
                return 1;
            }
            if (tmp == 0 && board[x][i] == 'c')
            {
                return 1;
            }
        }
    }
    for (int i = y + 1; i <= 9; i++)
    {
        int tmp = 0;
        if (board[x][i] == 'g' || board[x][i] == 'c')
        {
            for (int j = i - 1; j > y; j--)
            {
                if (board[x][j] != '#')
                {
                    tmp++;
                }
            }
            if (tmp == 1 && board[x][i] == 'g')
            {
                return 1;
            }
            if (tmp == 0 && board[x][i] == 'c')
            {
                return 1;
            }
        }
    }
    for (int i = 1; i < x; i++)
    {
        int tmp = 0;
        if (board[i][y] == 'g' || board[i][y] == 'c')
        {
            for (int j = i + 1; j < x; j++)
            {
                if (board[j][y] != '#')
                {
                    tmp++;
                }
            }
            if (tmp == 1 && board[x][i] == 'g')
            {
                return 1;
            }
            if (tmp == 0 && board[x][i] == 'c')
            {
                return 1;
            }
        }
    }
    for (int i = x + 1; i <= 5; i++)
    {
        int tmp = 0;
        if (board[i][y] == 'g' || board[i][y] == 'c')
        {
            for (int j = i - 1; j > x; j--)
            {
                if (board[j][y] != '#')
                {
                    tmp++;
                }
            }
            if (tmp == 1 && board[x][i] == 'g')
            {
                return 1;
            }
            if (tmp == 0 && board[x][i] == 'c')
            {
                return 1;
            }
        }
    }
    return 0;
}