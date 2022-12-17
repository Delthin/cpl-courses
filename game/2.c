#include <stdio.h>
#define NUM 100005
void SelectionSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = arr[i];
        int max_index = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                max_index = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = tmp;
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    char chose[7] = {0};
    scanf("%s", chose);
    int rela[NUM] = {0};
    int ansn = 0;
    int anso[10005] = {0};
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &rela[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        int next = 0;
        if (rela[i])
        {
            next = rela[i];
            rela[i] = 0;
            anso[ansn]++;
            while (rela[next])
            {
                int tmp = rela[next];
                rela[next] = 0;
                next = tmp;
                anso[ansn]++;
            }
            ansn++;
        }
    }
    SelectionSort(anso, ansn);

    if (chose[0] == 'n')
    {
        printf("%d", ansn);
    }
    else
    {
        for (int i = 0; i < ansn; i++)
        {
            printf("%d ", anso[i]);
        }
    }

    return 0;
}