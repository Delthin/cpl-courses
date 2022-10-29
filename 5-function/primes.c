// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
bool IsPrime(int number);

int main()
{
  int max = 0;
  scanf("%d", &max);

  for (int number = 2; number <= max; number++)
  {
    if (IsPrime(number))
    {
      printf("%d ", number);
    }
  }

  return 0;
}
bool IsPrime(int number)
{
  // bool is_prime = true;
  for (int i = 2; i * i <= number; i++)
  {
    if (number % i == 0)
    {
      // is_prime = false;
      //跟is_prime无关，可去
      //将break 改为return false 效果相同且结束函数
      return false;
    }
  }
  return true;
}