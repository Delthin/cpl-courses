#include <stdbool.h>
#include <stdio.h>
#define STACK_SIZE 10001
char contents[STACK_SIZE];
int top = 0;

void make_empty() { top = 0; }
bool is_empty() { return top == 0; }
bool is_full() { return top == STACK_SIZE; }
void push(char m)
{
    contents[top++] = m;
}
void pop()
{
    if (is_empty())
    {
        printf("Empty\n");
    }
    else
    {
        contents[--top] = 0;
    }
}
void print()
{
    if (is_empty())
    {
        printf("Empty\n");
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            printf("| %c |\n", contents[i]);
        }
        printf("|===|\n");
    }
}
void Top()
{
    if (is_empty())
    {
        printf("Empty\n");
    }
    else
    {
        printf("%c\n", contents[top - 1]);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char temp[7] = {0};
    int moves[10001] = {0};
    char cha[10001] = {0};
    for (int i = 0; i < n; i++)
    {
        gets(temp);
        if (temp[0] == 'p' && temp[1] == 'o')
        {
            moves[i] = 1;
        }
        if (temp[0] == 'p' && temp[1] == 'u')
        {
            moves[i] = 2;
            cha[i] = temp[5];
        }
        if (temp[0] == 't')
        {
            moves[i] = 3;
        }
        if (temp[1] == 'r')
        {
            moves[i] = 4;
        }
        for (int i = 0; i < 7; i++)
        {
            temp[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (moves[i] == 1)
        {
            pop();
        }
        if (moves[i] == 2)
        {
            push(cha[i]);
        }
        if (moves[i] == 3)
        {
            Top();
        }
        if (moves[i] == 4)
        {
            print();
        }
    }
}