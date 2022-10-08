#include <stdio.h>
int main()
{
    int nums[1000] = {0};
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", nums[i]);
        nums[i] = 0;
        for (int i = 1; i <= 10; i++)
        {
            if (nums[i] != 0)
            {
                printf("%d ", nums[i]);
            }
        }
    }
}