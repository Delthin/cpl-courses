#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10000
typedef struct string_hash
{
    char name[1001];
    struct string_hash *next;
} Str;
Str *strs[10001];
int hash(char *s);
void insert(char *s);
int query(char *s);

int main()
{
    int m, q;
    scanf("%d%d", &m, &q);
    for (int i = 0; i < m; i++)
    {
        char s[1001];
        scanf("%s", s);
        insert(s);
    }
    for (int i = 0; i < q; i++)
    {
        char s[1001];
        scanf("%s", s);
        if (query(s))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
int hash(char *s)
{
    int len = strlen(s);
    int ret = 0;
    for (int i = 0; i < len; i++)
    {
        ret = (ret + s[i] * (i + 1)) % N;
        
    }
    return ret;
}

void insert(char *s)
{
    int num = hash(s);
    Str *new_node = malloc(sizeof(Str));
    strcpy(new_node->name, s);
    new_node->next = NULL;
    Str *cur, *pre;
    for (cur = strs[num], pre = NULL; cur != NULL; pre = cur, cur = cur->next)
    {
        if (strcmp(cur->name, s) == 0)
        {
            return;
        }
    }
    if (pre == NULL)
    {
        strs[num] = new_node;
        return;
    }
    else
    {
        pre->next = new_node;
        return;
    }
}
int query(char *s)
{
    int num = hash(s);
    Str *cur = strs[num];
    for (; cur != NULL; cur = cur->next)
    {
        if (strcmp(cur->name, s) == 0)
        {
            return 1;
        }
    }
    return 0;
}