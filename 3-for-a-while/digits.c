#include <stdio.h>

int main() {
  int number = 0;
  scanf("%d", &number);

  int num_of_digits = 0;

  //while version
  /*if(number == 0){
    num_of_digits = 1;
  } else{
  while (number > 0){
    number /= 10;
    num_of_digits++;
  }
  }*/
  //do-while先做一次再判断while
  do{
    number /=10;
    num_of_digits++;
  } while (number > 0);//注意这里的分号
  printf("Number of digits is %d.\n", num_of_digits);
}