// Created by hfwei on 2022/10/13.
//如何将数组作为函数参数

#include <stdio.h>

#define LEN 10
// dictionary global variable 到整个文件结束
// avoid using global variables
int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
//想要传递数组本身，而不是首地址
// int dict[]只能传递首地址和类型，写在方括号里也会被忽略
// int len 显示长度
/**
 * Search for the key in the dict.
 * key: The key to search
 * dict: The dictionary to search
 * len: The length of the dict
 * return: the index of the key in the dict if found
 */
int BinarySearch(int key, int dict[], int len);

int main()
{
  int key = 0;
  scanf("%d", &key);
  int index = BinarySearch(key, dictionary, LEN);
  if (index == -1)
  {
    printf("Not found!\n");
  }
  else
  {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}
int BinarySearch(int key, const int dict[], int len)
{ // const 说明dict数组不会被修改
  //好习惯好习惯好习惯
  int low = 0;
  int high = LEN - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (key > dict[mid])
    {
      low = mid + 1;
    }
    else if (key < dict[mid])
    {
      high = mid - 1;
    }
    else
    {
      return mid;
      //替换break
    }
  }
  return -1;
}