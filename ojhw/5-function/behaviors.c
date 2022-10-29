#include <stdio.h>

void PrintYesOrNo(int tof);
int main()
{
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(1);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    PrintYesOrNo(0);
    return 0;
}
void PrintYesOrNo(int tof)
{
    if (tof)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}