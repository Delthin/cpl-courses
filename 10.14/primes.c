// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <stdbool.h>//bool用
#include <math.h>
#include <time.h>

int main() {
  int max = 0;
  scanf("%d", &max);

  // add code below
  int count = 0;
  for (int number = 2; number <= max; number++){
    //判断number素数
    //int is_prime = 1;
    bool is_prime = true;//换bool更容易区分
    for (int i = 2; i * i <= number; i++){//判断根号number换<=
    //边界条件多验证
      if (number % i == 0){
        is_prime = false;
        break;
      }
      
    }
    if (is_prime/* == 1*/){//==1可以省略
      count++;
      printf("%d ",number);
    }
  }
  printf("\n%d\n",count);
  return 0;
}