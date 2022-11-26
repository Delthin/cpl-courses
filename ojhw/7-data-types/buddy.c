#include <stdio.h>
#define NUM 10002

int number = 1;

int id[NUM] = {0};
int space[NUM] = {0};

void Split(int i);
void Quest();
void Allocate(int idd, int spp);
int Twos(int a);
int main()
{
    int n = 0;
    int q = 0;
    scanf("%d%d", &n, &q);
    space[0] = n;
    char tmp = 0;
    int idd = 0;
    int spp = 0;
    for (int sss = 0; sss < q; sss++)
    {
        getchar();
        scanf("%c", &tmp);
        if (tmp == 'Q')
        {
            Quest();
        }
        else
        {
            scanf("%d%d", &idd, &spp);
            Allocate(idd, spp);
        }
    }
    return 0;
}
void Quest()
{
    printf("%d\n", number);
    for (int i = 0; i < number; i++)
    {
        if (id[i])
        {
            printf("%d ", id[i]);
        }
        else
        {
            printf("0 ");
        }
    }
    printf("\n");
}
void Allocate(int idd, int spp)
{
    int digit = Twos(spp);
start:
    for (int i = 0; i < number; i++)
    {
        if (digit == space[i] && !id[i])
        {
            id[i] = idd;
            return;
        }
        else if (digit < space[i] && !id[i])
        {
            Split(i);
            goto start;
        }
    }
}
int Twos(int a)
{
    int b = -1;
    if (a > 2)
    {
        a = a * 2 - 1;
    }
    while (a > 0)
    {
        a /= 2;
        b++;
    }
    return b;
}
void Split(int i)
{
    space[i]--;
    for (int j = number; j > i; j--)
    {
        id[j] = id[j - 1];
        space[j] = space[j - 1];
    }
    number++;
}