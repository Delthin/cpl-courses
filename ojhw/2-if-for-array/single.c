#include <stdio.h>
int main()
{

  int n = 0, a = 0;
  int nums[1000] = {0};
  scanf("%d", &n);
  int N = 2 * n - 1;
  int x = 0;
  for (int i = 1; i <= N; i++)
  {
    scanf("%d", &a);
    nums[a]++;
  }

  for (int k = 1; k <= 1000; k++)
  {
    if (nums[k] == 1)
    {
      x = k;
    };
  }
  printf("%d ", x);

  return 0;
}