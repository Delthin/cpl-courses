#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *rule = malloc(128 * sizeof(rule));
    scanf("%s", rule);
    char *need = malloc(52 * sizeof(need));
    char *noneed = malloc(52 * sizeof(noneed));
    int tmp1 = 0, tmp2 = 0;
    for (int i = 0; i < strlen(rule); i++)
    {
        if (*(rule + i + 1) == ':')
        {
            *(need + tmp1) = *(rule + i);
            tmp1++;
            i++;
        }
        else
        {
            *(noneed + tmp2) = *(rule + i);
            tmp2++;
        }
    }
    char *name = malloc(1024 * sizeof(name));
    scanf("%s", name);
    char *str = malloc(1024 * sizeof(str));
    char *ans1 = malloc(1024 * sizeof(ans1));
    int *ans2 = malloc(1024 * sizeof(ans2));
    char *value = malloc(1024 * 1024 * sizeof(value));
    int num = 0;
    int IsFalse = 0;
    char Falsech;
    while (scanf("%s", str) != EOF)
    {
        if (strlen(str) == 2 && *str == '-')
        {
            for (int i = 0; i < strlen(need); i++)
            {
                if (*(str + 1) == *(need + i))
                {
                    *(ans1 + num) = *(need + i);
                    *(ans2 + num) = 1;
                    if (scanf("%s", value + num * 1024) == EOF)
                    {
                        IsFalse = 1;
                        Falsech = *(need + i);
                        goto nottrue;
                    };
                    num++;
                    goto next;
                }
            }
            for (int i = 0; i < strlen(noneed); i++)
            {
                if (*(str + 1) == *(noneed + i))
                {
                    *(ans1 + num) = *(noneed + i);
                    *(ans2 + num) = 2;
                    num++;
                    goto next;
                }
            }

            IsFalse = 2;
            Falsech = *(str + 1);
            goto nottrue;
        }
    next:
    }
nottrue:
    if (IsFalse == 1)
    {
        printf("%s: option requires an argument -- '%c'", name, Falsech);
        return 0;
    }
    else if (IsFalse == 2)
    {
        printf("%s: invalid option -- '%c'", name, Falsech);
        return 0;
    }
    printf("%s\n", name);
    for (int i = 0; i < num; i++)
    {
        if (*(ans2 + i) == 1)
        {
            printf("%c=%s\n", *(ans1 + i), value + 1024 * i);
        }
        else if (*(ans2 + i) == 2)
        {
            printf("%c\n", *(ans1 + i));
        }
    }

    return 0;
}