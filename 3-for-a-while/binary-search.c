
#include <stdio.h>

#define LEN 10
int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int main() {
  int key = 0;
  scanf("%d", &key);

  // add code below
  int low = 0;
  int high = LEN - 1;
  int index = -1;
  while (low <= high) {
    int mid = (low + high) / 2;//向下取整

    if (key > dictionary[mid]){
      low = mid + 1;}
      else if ( key < dictionary[mid]){
        high = mid - 1;}
        else {
          index = mid;
          high = index - 1;//收缩范围但我不懂
        }
      }


  if (index == -1) {
    printf("Not found!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}