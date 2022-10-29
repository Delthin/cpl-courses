// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  int year = 0;
//  int leap = 0;
  scanf("%d", &year);

  /*if (year % 4 != 0)
  {
    leap = 0;
  }
  else if (year % 100 != 0)
  {
    leap = 1;//year % 4 = 0 and year % 100 != 0
  }
  else if (year % 400 != 0)
  {
    leap = 0;
  }
  else
  {
    leap = 1;// year % 400 == 0
  }*/

/*//使用逻辑运算符
  if ((year % 4 == 0 && year % 100 != 0) ||
  (year % 400 == 0)) {
    leap = 1;
  }
  /* else {
    leap = 0;
  }*///开局定义为0*/

  int leap = ((year % 4 == 0 && year % 100 != 0) ||
  (year % 400 == 0));

  if (leap == 0) {
    printf("The year %d is a common year.\n", year);
  } else {
    printf("The year %d is a leap year.\n", year);
  }


  return 0;
}