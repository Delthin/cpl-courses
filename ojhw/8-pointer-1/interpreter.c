#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ans = malloc(sizeof(ans));
    scanf("%x", ans);
    printf("%d\n", *ans);
    printf("%u\n", *ans);
    printf("%.6f\n", *(float *)ans);
    printf("%.4g\n", *(float *)ans);
    return 0;
}