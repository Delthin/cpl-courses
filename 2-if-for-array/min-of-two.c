// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  scanf("%d%d", &a, &b);
  int min;
  if (a >= b){
    min = b;
  } else {
    min = a;
  }
  //min = a >=b ? b : a;
  //?和:叫三目运算符，是就返回b，不是就返回a，不要用太多
  printf ("min{%d,%d} = %d\n",a, b, min);
  // add code here

  return 0;
}