#include <stdio.h>
#define NUM 100005
int find(int x, int nums[], int len);
int main()
{
    int n = 0;
    int nums[NUM] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        nums[i] = find(i, nums, n);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
int find(int x, int nums[], int len)
{
    if (x == nums[x])
    {
        return x;
    }
    return find(nums[x], nums, len);
}