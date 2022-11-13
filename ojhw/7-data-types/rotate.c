#include <stdio.h>
#include <string.h>
int xx1 = 0;
int xx2 = 0;
int yy1 = 0;
int yy2 = 0;
int hh = 0;
void D(int y1, int y2, int h);
void A(int y1, int y2, int h);
void W(int x1, int x2, int h);
void S(int x1, int x2, int h);
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    char moves[1001] = {0};
    scanf("%s", moves);
    int n = strlen(moves);
    xx2 = a;
    yy2 = b;
    hh = c;

    for (int i = 0; i < n; i++)
    {
        if (moves[i] == 'D')
        {
            D(yy1, yy2, hh);
        }
        if (moves[i] == 'A')
        {
            A(yy1, yy2, hh);
        }
        if (moves[i] == 'W')
        {
            W(xx1, xx2, hh);
        }
        if (moves[i] == 'S')
        {
            S(xx1, xx2, hh);
        }
    }
    printf("%d %d %d %d", xx1, xx2, yy1, yy2);

    return 0;
}
void D(int y1, int y2, int h)
{
    yy1 = y2;
    yy2 = y2 + h;
    hh = y2 - y1;
}
void A(int y1, int y2, int h)
{
    yy2 = y1;
    yy1 = y1 - h;
    hh = y2 - y1;
}
void W(int x1, int x2, int h)
{
    xx2 = x1;
    xx1 = x1 - h;
    hh = x2 - x1;
}
void S(int x1, int x2, int h)
{
    xx1 = x2;
    xx2 = x2 + h;
    hh = x2 - x1;
}