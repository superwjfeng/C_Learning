#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Problem 1
void print_triangle(int row)
{
    printf("*\n");
    printf("* *\n");
    int i = 0;
    for (i = 3; i < row; i++)
    {
        printf("* ");
        int j = 0;
        for (j = 0; j < 2 * (i - 2); j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (i = 0; i < row; i++)
    {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int row = 0;
    while (~scanf("%d", &row))
    {
        print_triangle(row);
    }
    return 0;
}


//Problem 2

