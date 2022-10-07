// Created by hfwei on 2022/10/6.
//

#include <stdio.h>
#define NUM 5

int main() {
  int numbers[NUM] = {0};//下标0赋值0其他自动补零
  //5 magic number define 解决报错

  for(int i = 0; i < NUM; i++){
    scanf("%d", &numbers[i]);
  }

  int min = numbers[0];

  for (int i = 1; i < NUM; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }

  printf ("%d\n", min);


  return 0;
}