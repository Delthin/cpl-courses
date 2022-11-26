#include <stdio.h>
#include <string.h>
#define STACK_SIZE 100001
char contents[STACK_SIZE];
int top = 0;
void push(int m)
{
    contents[top++] = m;
}
void pop()
{
    contents[--top] = 0;
}
int main()
{
    int T = 0;
    int n = 0;
    scanf("%d", &T);
    char con[STACK_SIZE] = {0};
    int ans[31] = {0};
    for (int ct = 0; ct < T; ct++)
    {
        top = 0;
        scanf("%s", con);
        n = strlen(con);
        if (con[0] == '(')
        {
            push(1);
        }
        if (con[0] == ')')
        {
            push(2);
        }
        if (con[0] == '[')
        {
            push(4);
        }
        if (con[0] == ']')
        {
            push(5);
        }
        if (con[0] == '{')
        {
            push(7);
        }
        if (con[0] == '}')
        {
            push(8);
        }
        for (int i = 1; i < n; i++)
        {
            if (con[i] == '(')
            {
                push(1);
            }
            if (con[i] == ')')
            {
                push(2);
            }
            if (con[i] == '[')
            {
                push(4);
            }
            if (con[i] == ']')
            {
                push(5);
            }
            if (con[i] == '{')
            {
                push(7);
            }
            if (con[i] == '}')
            {
                push(8);
            }
            if (contents[top - 1] - contents[top - 2] == 1)
            {
                pop();
                pop();
            }
        }
        ans[ct] = contents[0];
        for (int i = 0; i < n; i++)
        {
            contents[i] = 0;
            con[i] = 0;
        }
    }
    for (int i = 0; i < T; i++)
    {
        if (ans[i])
        {
            printf("False\n");
        }
        else
        {
            printf("True\n");
        }
    }
    return 0;
}