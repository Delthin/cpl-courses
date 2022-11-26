#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str = malloc(4096 * sizeof(str));
    gets(str);
    int len = strlen(str);
    if (*str >= 97)
    {
        *str -= 32;
    }

    for (int i = 1; i < len; i++)
    {
        if (*(str + i - 1) != 32 && *(str + i) <= 90 && *(str + i) != 32)
        {
            *(str + i) += 32;
        }
        if (*(str + i - 1) == 32 && *(str + i) >= 97)
        {
            *(str + i) -= 32;
        }
    }
    puts(str);

    return 0;
}