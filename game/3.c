#include <stdio.h>
int Judge(int a, int b, int c);
int board[70][6] = {0};
int n = 0, k = 0;
int main()
{
    scanf("%d%d", &n, &k);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }
    for (int i = 0; i < n - 4; i++)
    {
        for (int j = i + 1; j < n - 3; j++)
        {
            for (int m = j + 1; m < n - 2; m++)
            {
                for (int q = m + 1; q < n - 1; q++)
                {
                    for (int w = q + 1; w < n; w++)
                    {
                        int tmp = 0;
                        if (Judge(i, j, m))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(i, j, q))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(i, j, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(i, m, q))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(i, m, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(i, q, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(j, m, q))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(j, m, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(j, q, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                        if (Judge(m, q, w))
                        {
                            tmp++;
                        }
                        if (tmp >= 2)
                        {
                            ans++;
                            continue;
                        }
                    }
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}
int Judge(int a, int b, int c)
{
    for (int i = 0; i < k; i++)
    {
        if (board[a][i] == board[b][i] && board[b][i] == board[c][i])
        {
            continue;
        }
        if (board[a][i] == 0)
        {
            if (board[b][i] == 1)
            {
                if (board[c][i] == 2)
                {
                    continue;
                }
                return 0;
            }
            if (board[b][i] == 2)
            {
                if (board[c][i] == 1)
                {
                    continue;
                }
                return 0;
            }
            return 0;
        }
        if (board[a][i] == 1)
        {
            if (board[b][i] == 2)
            {
                if (board[c][i] == 0)
                {
                    continue;
                }
                return 0;
            }
            if (board[b][i] == 0)
            {
                if (board[c][i] == 2)
                {
                    continue;
                }
                return 0;
            }
            return 0;
        }
        if (board[a][i] == 2)
        {
            if (board[b][i] == 1)
            {
                if (board[c][i] == 0)
                {
                    continue;
                }
                return 0;
            }
            if (board[b][i] == 0)
            {
                if (board[c][i] == 1)
                {
                    continue;
                }
                return 0;
            }
            return 0;
        }
    }
    return 1;
}