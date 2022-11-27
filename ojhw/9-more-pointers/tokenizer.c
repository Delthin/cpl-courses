#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int outputnum = 0;
int process(char *str, int *ans);
int main()
{
    int *ans = malloc(4096 * sizeof(ans));
    char *s = malloc(4096 * sizeof(s));
    int Is_Error = 0;
    while (scanf("%s", s) != EOF)
    {
        char *position = strchr(s, ';');
        if (position == NULL)
        {
            if (!process(s, ans))
            {
                Is_Error = 1;
                break;
            }
        }
        else
        {
            if (strlen(s) == 1)
            {
                *(ans + outputnum) = 6;
                outputnum++;
                continue;
            }
            if (position == s)
            {
                if (!process(s + 1, ans))
                {
                    Is_Error = 1;
                    break;
                }
                *(ans + outputnum) = 6;
                outputnum++;
            }
            else if ((position - s) == strlen(s) - 1)
            {
                *(position) = '\0';
                if (!process(s, ans))
                {
                    Is_Error = 1;
                    break;
                }
                *(ans + outputnum) = 6;
                outputnum++;
            }
            else
            {
                *(position) = '\0';
                if (!process(s, ans))
                {
                    Is_Error = 1;
                    break;
                }
                *(ans + outputnum) = 6;
                outputnum++;
                if (!process(position + 1, ans))
                {
                    Is_Error = 1;
                    break;
                }
            }
        }
    }
    if (Is_Error)
    {
        printf("Compile Error");
    }
    else
    {
        for (int i = 0; i < outputnum; i++)
        {
            if (*(ans + i) == 1)
            {
                printf("reserved ");
            }
            if (*(ans + i) == 2)
            {
                printf("integer ");
            }
            if (*(ans + i) == 3)
            {
                printf("float ");
            }
            if (*(ans + i) == 4)
            {
                printf("operator ");
            }
            if (*(ans + i) == 5)
            {
                printf("variable ");
            }
            if (*(ans + i) == 6)
            {
                printf("\n");
            }
        }
        free(ans);
        free(s);
    }

    return 0;
}
int process(char *str, int *ans) //记得换行
{
    int len = strlen(str);
    // reserved
    if (strcmp(str, "const") == 0 || strcmp(str, "int") == 0 || strcmp(str, "float") == 0 || strcmp(str, "double") == 0 || strcmp(str, "long") == 0 || strcmp(str, "static") == 0 || strcmp(str, "void") == 0 || strcmp(str, "char") == 0 || strcmp(str, "extern") == 0 || strcmp(str, "return") == 0 || strcmp(str, "break") == 0 || strcmp(str, "enum") == 0 || strcmp(str, "struct") == 0 || strcmp(str, "typedef") == 0 || strcmp(str, "union") == 0 || strcmp(str, "goto") == 0)
    {
        *(ans + outputnum) = 1;
        outputnum++;
        return 1;
    }
    // integer and float
    int Dotnum = 0;
    if (*str == '0' && len == 1)
    {
        *(ans + outputnum) = 2;
        outputnum++;
        return 1;
    }
    else if (*str <= '9' && *str >= '0' || *str == '.')
    {
        for (int i = 0; i < len; i++)
        {
            if (*(str + i) == '.')
            {
                Dotnum++;
            }
            else if (*(str + i) > '9' || *(str + i) < '0')
            {
                return 0;
            }
        }
        if (!Dotnum)
        {
            *(ans + outputnum) = 2;
            outputnum++;
            return 1;
        }
        else if (Dotnum == 1)
        {
            *(ans + outputnum) = 3;
            outputnum++;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    // operator
    if (len == 1 && (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '=' || *str == '>' || *str == '<'))
    {
        *(ans + outputnum) = 4;
        outputnum++;
        return 1;
    }
    if (len == 2 && ((*str == '=') && (*(str + 1) == '=') || (*str == '!') && (*(str + 1) == '=') || (*str == '<') && (*(str + 1) == '=') || (*str == '>') && (*(str + 1) == '=')))
    {
        *(ans + outputnum) = 4;
        outputnum++;
        return 1;
    }
    // variable
    if ((*str <= 'Z' && *str >= 'A') || (*str <= 'z' && *str >= 'a') || *str == '_')
    {
        for (int i = 1; i < len; i++)
        {
            if (!((*(str + i) <= 'Z' && *(str + i) >= 'A') || (*(str + i) <= 'z' && *(str + i) >= 'a') || *(str + i) == '_' || (*(str + i) <= '9' && *(str + i) >= '0')))
            {
                return 0;
            }
        }
        *(ans + outputnum) = 5;
        outputnum++;
        return 1;
    }
    return 0;
}