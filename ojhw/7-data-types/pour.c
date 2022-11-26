#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
jmp_buf judge;
int Min(int a, int b);

void Pour(int a, int b, int c, int count);
int a0 = 0, b0 = 0, c0 = 0;
int Va = 0, Vb = 0, Vc = 0;

int main()
{
    int k = 0;
    int a = 0, b = 0, c = 0;
    scanf("%d", &k);
    scanf("%d%d%d", &Va, &Vb, &Vc);
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d%d%d", &a0, &b0, &c0);
    if (!setjmp(judge))
    {
        Pour(a, b, c, k);
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}
int Min(int x, int y)
{
    if (x >= y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
void Pour(int a, int b, int c, int count)
{
    if (count >= 0 && a == a0 && b == b0 && c == c0)
    {
        printf("Yes");
        longjmp(judge, 1);
    }
    if (count == 0)
    {
        return;
    }
    if (a)
    {
        Pour(0, Min(a + b, Vb), c, count - 1);
        Pour(0, b, Min(a + c, Vc), count - 1);
    }
    if (b)
    {
        Pour(Min(a + b, Va), 0, c, count - 1);
        Pour(a, 0, Min(b + c, Vc), count - 1);
    }
    if (c)
    {
        Pour(Min(a + c, Va), b, 0, count - 1);
        Pour(a, Min(b + c, Vb), 0, count - 1);
    }
}