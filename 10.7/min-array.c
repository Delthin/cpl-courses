#include <stdio.h>

int main() {
  const int NUM = 5;
  int numbers[5] = {23, 56, 19, 11, 78};
  //下标从零开始

  int min = numbers[0];
  //(1)[]:下标运算符
  //(2)i<NUM :not i <= NUM 否则第五次后访问越界
  //(3)int i = 1 >=C99
  //(4)i++ ++i
  for (int i = 1; i < NUM; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }
  //出了for不能再访问i
  //for(1.初始化;2.判断条件不再满足时终止循环;4.回来再去2，3){3.做事}
  printf ("%d\n", min);
  return 0;
}