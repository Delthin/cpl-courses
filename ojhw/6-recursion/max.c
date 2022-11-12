#include <stdio.h>
#define NUM 100005
void Maxseg(int nums[], int len, int ans[][2], int l, int r);
int max(int nums[], int n, int l, int r);
int main()
{
    int n = 0;
    int nums[NUM] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int ans[NUM][2] = {0};
    Maxseg(nums, n, ans, 1, n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d %d\n", ans[i][0], ans[i][1]);
    }

    return 0;
}
int max(int nums[], int n, int l, int r)
{
    int maximum = 0;
    for (int i = l; i <= r; i++)
    {
        if (nums[i] > nums[maximum])
        {
            maximum = i;
        }
    }
    return maximum;
}
void Maxseg(int nums[], int len, int ans[][2], int l, int r)
{
    ans[max(nums, len, l, r)][0] = l;
    ans[max(nums, len, l, r)][1] = r;
    if (max(nums, len, l, r) != l)
    {
        Maxseg(nums, len, ans, l, max(nums, len, l, r) - 1);
    }
    if (max(nums, len, l, r) != r)
    {
        Maxseg(nums, len, ans, max(nums, len, l, r) + 1, r);
    }
}