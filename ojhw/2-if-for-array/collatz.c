#include <stdio.h>
#define NUM 100000
int main()
{
    int num;
    int nums[NUM] = {0};
    int i = 0;
    int k = 0;
    scanf("%d", &num);
    nums[0] = num;
    for (k = 0; num != 1; k++, i++, nums[i] = num)
    {
        if (num % 2 == 1)
        {
            num = 3 * num + 1;
        }
        else
        {
            num = num / 2;
        }
    }

    int max = nums[0];
    for (i = 0; i < NUM; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    printf("%d %d", k, max);

    return 0;
}