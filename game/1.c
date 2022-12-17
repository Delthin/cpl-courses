#include <stdio.h>
#define NUM 1000003

int main()
{
    int n = 0;
    scanf("%d", &n);
    int board[NUM] = {0};
    int ans[NUM] = {0};
    int pos = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &board[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (board[i] == 2)
        {
            pos = i;
        }
    }
    ans[pos] = 1;
    if (board[pos - 1] == 0 && pos != 1)
    {
        ans[pos - 1] = 1;
    }
    if (board[pos + 1] == 0 && pos != n)
    {
        ans[pos + 1] = 1;
    }
    int st1 = pos;
    int st2 = pos;
    while (board[st1 + 1] == 1 && board[st1 + 2] == 0 && st1 < n - 1)
    {
        ans[st1 + 2] = 1;
        st1 += 2;
    }
    while (board[st2 - 1] == 1 && board[st2 - 2] == 0 && st2 > 2)
    {
        ans[st2 - 2] = 1;
        st2 -= 2;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}