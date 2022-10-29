#include <stdio.h>

int main()
{
    FILE *f = fopen(hello.txt);
    fprintf(f, "Hello world!\n");
    return 0;
}
// gcc hello.c -o hello