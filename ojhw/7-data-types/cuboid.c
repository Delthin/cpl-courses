#include <stdio.h>
#define NUM1 51
#define NUM2 82
void Print(int a, int b, int c);
int main()
{
    int T = 0;
    int a[NUM1] = {0};
    int b[NUM1] = {0};
    int c[NUM1] = {0};
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
    }
    for (int i = 0; i < T; i++)
    {
        Print(a[i], b[i], c[i]);
    }
    return 0;
}
void Print(int a, int b, int c)
{
    int xm = 2 * (a + b) + 1;
    int ym = 2 * (b + c) + 1;
    char board[NUM2][NUM2] = {0};
    /*for (int y = 1; y <= ym; y++)
    {
        for (int x = 1; x <= xm; x++)
        {
            if (y % 2)
            {
                if (x % 2)
                {
                    board[x][y] = '+';
                }
                else
                {
                    board[x][y] = '-';
                }
            }
            else
            {
                if (x % 2)
                {
                    board[x][y] = '|';
                }
                else
                {
                    board[x][y] = '/';
                }
            }
        }
    }
    for (int y = 1; y <= ym; y++)
    {
        for (int x = 1; x <= xm; x++)
        {
            if (x + y <= 2 * b + 1 || xm * ym - x - y <= 2 * b + 1){
                board[x][y] = ' ';
            }
            if (y % 2){
                if (y <=)
            }
        }
    }*/
    for (int y = 1; y <= ym; y += 2)
    {
        int jian = a;
        for (int x = 1; x <= xm; x += 2)
        {
            if (x + y <= 2 * b + 1 || xm + ym - x - y <= 2 * b - 1)
            {
                board[x][y] = ' ';
            }
            else
            {
                board[x][y] = '+';
            }
        }

        for (int x = 2; x <= xm; x += 2)
        {
            if (jian == 0)
            {
                break;
            }
            if (x + y <= 2 * b + 1 || xm + ym - x - y <= 2 * b - 1)
            {
                board[x][y] = ' ';
            }
            else
            {
                board[x][y] = '-';
                jian--;
            }
        }
        jian = a;
    }

    for (int y = 2; y <= ym; y += 2)
    {
        int shu = c;
        for (int x = 1; x <= xm; x += 2)
        {
            if ((x + y >= 2 * (a + b) + 3 || y > 2 * b) && (xm + ym - x - y > 2 * b - 1))
            {
                board[x][y] = '|';
            }
            else
            {
                board[x][y] = ' ';
            }
        }
        for (int x = 2; x <= xm; x += 2)
        {
            if (x + y <= 2 * b + 1 || xm + ym - x - y <= 2 * b - 1 || (y > 2 * b && x < xm - 2 * b))
            {
                board[x][y] = ' ';
            }
            else
            {
                board[x][y] = '/';
            }
        }
    }

    for (int y = 1; y <= ym; y++)
    {
        for (int x = 1; x <= xm; x++)
        {
            if (board[x][y] == 0)
            {
                printf(" ");
            }
            else
            {

                printf("%c", board[x][y]);
            }
        }
        printf("\n");
    }
    return;
}