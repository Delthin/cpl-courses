// Created by hfwei on 2022/10/6.
//

#include <stdio.h>
#include <stdbool.h>
//函数声明 可把函数体丢在最后
bool IsLeapYear(int year);
/*bool IsLeapYear(int year)
{//bool year = 可直接被return替代
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); //返回值 到这里终止（当某些条件成立return否则return另一个）
}*/

int main()
{
  // year:real scope (lifetime)实际参数
  // year in the main function: local variable局部变量作用域从定义开始到函数结束
  //从定义开始到return 0 结束
  int year = 0;
  scanf("%d", &year);

  bool leap = IsLeapYear(year);

  if (!leap)
  {
    printf("The year %d is a common year.\n", year);
  }
  else
  {
    printf("The year %d is a leap year.\n", year);
  }

  return 0;
}
// year: formal parameter形式参数
// scope: same as a local variable
// In C: pass by value (传值)实参拷贝一份给形参
bool IsLeapYear(int year)
{
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); //返回值 到这里终止（当某些条件成立return否则return另一个）
}