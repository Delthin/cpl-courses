#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

int main()
{
  scanf("%20s", string); //最多存20个字符

  int len = 0;
  while (string[len] != '\0')
  { //\0表示结束
    len++;
  }

  bool is_palindrome = true;
  for (int i = 0, j = len - 1; i < j; ++i, j--)
  {
    if (string[i] != string[j])
    {
      is_palindrome = false;
      break;
    }
  }
  printf("\"%s\" is %s a palindrome.\n", string,
         is_palindrome ? "" : "not"); // bool输出
  return 0;
}