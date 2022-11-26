#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool Judge(int len2, int i);
int main()
{
    char *S = malloc(100000 * sizeof(S));
    char *T = malloc(100000 * sizeof(T));
    scanf("%s", S);
    scanf("%s", T);
    int len1 = strlen(S);
    int len2 = strlen(T);
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (*(S + i + j) != *(T + j))
            {
                goto Next;
            }
        }
        printf("%d ", i);
    Next:
    }

    return 0;
}
