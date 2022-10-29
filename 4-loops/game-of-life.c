//
// Created by hengxin on 10/19/22.
// Run it with "Terminal"
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>

#define SIZE 6
#define MAX_ROUND 10
const int board[SIZE][SIZE] = {//每一行分别初始化
    {0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0},
    {0}
};

//const int board[SIZE][SIZE] = {
//    [1][1] = 1, [1][2] = 1,
//    [2][1] = 1, [2][2] = 1,
//    [3][3] = 1, [3][4] = 1,
//    [4][3] = 1, [4][4] = 1
//};
//或者指示器初始化明确列出各个为1的点

int main() {
  //extend to board[SIZE + 2][SIZE + 2]
  int old_board[SIZE + 2][SIZE + 2];
  for (int row = 0; row < SIZE + 2; row++){
    for ( int col = 0; col < SIZE + 2; col ++){
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1){
        old_board[row][col] = 0;
      } else {
        old_board[row][col] = board[row - 1][col - 1];
      }
    }
  }


  // print the original board扩充一圈得到新的棋盘
  //九宫格相加判断得到新棋盘
  for (int row = 1; row < SIZE + 1; row ++){
    for (int col = 1; col < SIZE + 1; col ++){
      printf ("%c ",old_board[row][col] ? '*' : ' ');//存活*否则空格//双引号字符串单引号字符
    }
    printf ("\n");
}

  int next_board[SIZE + 2][SIZE + 2] = {0};

  for (int round = 1; round <= MAX_ROUND; round++){
    for (int row = 1; row < SIZE + 1; row ++){
      for (int col = 1; col < SIZE + 1; col ++){
      int neighbours = old_board[row - 1][col - 1] 
      + old_board[row - 1][col] 
      + old_board[row - 1][col + 1] 
      + old_board[row][col - 1]
      + old_board[row][col + 1]
      + old_board[row + 1][col - 1]
      + old_board[row + 1][col]
      + old_board[row + 1][col + 1];

      //判断条件
      if (old_board[row][col]){
        next_board[row][col] = (neighbours == 2 || neighbours == 3);
      } else{
        next_board[row][col] = (neighbours == 3);
      }
    }
  }
  
    //打印新的局面
    system("cls");
    for (int row = 1; row < SIZE + 1; row ++){
      for (int col = 1; col < SIZE + 1; col ++){
      printf ("%c ",next_board[row][col] ? '*' : ' ');//存活*否则空格//双引号字符串单引号字符
    }
    printf ("\n");
} 
//wins include <windows.h> sleep(ms)
sleep (1);
//wins #include <conio.h>
system("cls");
for (int row = 0; row < SIZE + 2; row++){
  for (int col = 0; col < SIZE + 2; col++){
    old_board[row][col] = next_board[row][col];
  }

}}
  return 0;
}