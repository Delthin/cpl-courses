#include <stdio.h>
int main()
{
    int n = 0;
    char temp = 0;
    int str1[53] = {0};
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i++)
    {
        scanf("%c", &temp);
        if (temp <= 122 && temp >= 97)
        {
            str1[2 * (temp - 96) - 1]++;
        }
        else if (temp <= 90 && temp >= 65)
        {
            str1[2 * (temp - 64)]++;
        }
    }

    int max = str1[1];
    for (int i = 1; i <= 52; i++)
    {
        if (str1[i] > max)
        {
            max = str1[i];
        }
    }


    for (int i = max; i > 0; i--)
    {
        for (int j = 1; j <= 52; j+=2)
        {   if (str1[j] != 0){
            if (str1[j] - max >= 0){
                printf ("=");
            } else {
                printf (" ");
            }
        } if (str1[j+1] != 0){
            if (str1[j+1] - max >= 0){
                printf ("=");
            } else {
                printf (" ");
            }
        } if (str1[j] != 0 || str1[j+1] != 0){
            printf (" ");
        }
        }max--;
        printf("\n");
    }

    for(int i = 1; i <= 52; i+=2){
        if (str1[i] != 0){printf ("-");}
        if (str1[i+1] != 0){printf ("-");}
        if (str1[i] != 0 || str1[i+1] != 0){ printf ("-");}
    }


    /*for (int i = 1; i <= 52; i++)
    {
        if (i == 27)
        {
            printf("\n");
        }
        printf("%d", str1[i]);
    }
    printf("\n%d", max);*/

    return 0;
}