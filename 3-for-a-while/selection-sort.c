// Created by hfwei on 2022/10/13.
//有问题

#include <stdio.h>

#define LEN 20
int numbers[LEN] = {0};

int main() {
  /*
   * Input the array
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   * swap交换排序
   */
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);//输入超过 ++len先加再输出
  /* 不需要{}循环体空直接加分号
   * scanf 整型返回值成功输入几个End of file
   * 读到没东西就返回EOF while停止
   */
  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // add code below
  for (int i = 0; i < len; i++){
    //find the minimum value of numebrs
    int min = numbers[i];
    int min_index = i;
    
    for (int j = i + 1; j <= len - 1; j++){
      if (numbers[j] < min){
        min = numbers[j];
        min_index = j;
      }
    }
    //swap the two numbers
    int temp = numbers[min_index];
    numbers[min_index] = numbers[i];
    numbers[i] = temp;
  }

  return 0;
}