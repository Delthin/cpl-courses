// Created by hfwei on 2022/10/13.
//

#include <stdio.h>

#define LEN 20

void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);
void Swap(int left, int right);

int main()
{
  int numbers[LEN] = {0};
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF)
    ;
  Print(numbers, len);
  //传递首地址
  //值传递原则传递copy of the adderess of the first number of numbers
  SelectionSort(numbers, len);
  Print(numbers, len);
}

void Print(const int arr[], int len)
{
  printf("\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void SelectionSort(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    int min = arr[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
        min_index = j;
      }
    } //放在slectionsort中改动数组，拷贝的是地址，直接改变地址所在的空间
    //即直接访问numbers[i]并加以改动
    int tmp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = tmp;
    // Swap 1 = arr[1], 5 = arr[5]只在Swap中交换
    //需要把交换后的值传回
    // Swap(arr[i], arr[min_index]);
  }
}
/*Void Swap(int left, int right)
{
  int tmp = left;
  left = right;
  right = tmp;}*/
