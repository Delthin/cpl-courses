#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct file
{
    char name[11];
    struct file *a;
    struct file *b;
    struct file *prev;
} File;
File *find_part(File *p, char *name);
void insert(char *tmp1, char *tmp2);
int query(File *p, char *tmp2);
int count(File *p);
void reemove(char *tmp2);
File *inventory = NULL;

int main()
{
    int n = 0;
    int q = 0;
    scanf("%d%d", &n, &q);
    char tmp1[11], tmp2[11];

    scanf("%s%s", tmp1, tmp2);
    inventory = (File *)malloc(sizeof(File));
    inventory->a = NULL;
    inventory->b = NULL;
    strcpy(inventory->name, tmp1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%s%s", tmp1, tmp2);
        insert(tmp1, tmp2);
    }
    for (int i = 0; i < q; i++)
    {
        scanf("%s%s", tmp1, tmp2);
        if (strcmp(tmp1, "query") == 0)
        {
            printf("%d\n", query(inventory, tmp2));
        }
        else if (strcmp(tmp1, "remove") == 0)
        {
            reemove(tmp2);
        }
    }
    return 0;
}
File *find_part(File *p, char *name)
{
    File *ret = NULL;
    if (p == NULL)
    {
        ret = NULL;
    }
    else if (strcmp(name, p->name) == 0)
    {
        ret = p;
    }
    else
    {
        if (ret == NULL)
        {
            ret = find_part(p->a, name);
        }
        if (ret == NULL)
        {
            ret = find_part(p->b, name);
        }
    }
    return ret;
}
void insert(char *tmp1, char *tmp2)
{
    File *new_node = (File *)malloc(sizeof(File));
    new_node->a = NULL;
    new_node->b = NULL;
    strcpy(new_node->name, tmp1);
    File *pre = find_part(inventory, tmp2);
    new_node->prev = pre;
    if (pre->a == NULL)
    {
        pre->a = new_node;
    }
    else
    {
        pre->b = new_node;
    }
    return;
}

int query(File *p, char *tmp2)
{
    File *pos = find_part(inventory, tmp2);

    return count(pos);
}

int count(File *p)
{
    int num = 1;
    if (p->a != NULL)
    {
        num += count(p->a);
    }
    if (p->b != NULL)
    {
        num += count(p->b);
    }
    return num;
}

void reemove(char *tmp2)
{
    File *p = find_part(inventory, tmp2);
    File *pre = p->prev;
    if (p == pre->a)
    {
        pre->a = NULL;
        free(p);
        return;
    }
    if (p == pre->b)
    {
        pre->b = NULL;
        free(p);
        return;
    }
}