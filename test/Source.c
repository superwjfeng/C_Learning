#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(int* a, int* b)
{
    int tmp = 0;
    tmp = *b;
    *b = *a;
    *a = tmp;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d,%d", &a, &b);
    swap(&a, &b);
    printf("a=%d,b=%d", a, b);
    return 0;
}
