#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

//void FiboGene(void)
//{
//    int fib[100] = { 0 };
//    fib[0] = 0;
//    fib[1] = 1;
//    int i = 0;
//    for (i = 2; i < 100; i++)
//    {
//        if (fib[i] > 1000000)
//        {
//            break;
//        }
//        fib[i] = fib[i - 1] + fib[i - 2];
//    }
//}
//
//int main()
//{
//    //int n = 0;
//    //scanf("%d", &n);
//    FiboGene();
//    return 0;
//}

#include <stdio.h>

/*
//单个树冠
void single_tree(void)
{
    int i = 0;
    for (i=0; i<3; i++)
    {
        int j = 0;
        for (j=0; j<2-i; j++)
            printf(" ");
        for (j=0; j<=i; j++)
            printf("* ");
        printf("\n");
    }
}

//树冠前的空白
void single_blank(void)
{
    int i = 0;
    for (i=0; i<3; i++)
    {
        int j = 0;
        for (j=0; j<3; j++)
            printf(" ");
    }
}
*/



//#include <stdio.h>
//
//void bubble_sort(int* arr_ordered, int n)
//{
//    int i = 0;
//    for (i=0; i<n; i++)
//    {
//        if(arr_ordered[i] > arr_ordered[i+1])
//        {
//            int tmp = 0;
//            tmp = arr_ordered[i+1];
//            arr_ordered[i+1] = arr_ordered[i];
//            arr_ordered[i] = tmp;
//        }
//    }
//}
//
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    int arr[50] = {0};
//    int arr_ordered[50] = {0};
//    scanf("%d", &n);
//    for (i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//        arr_ordered[0] = arr[i];
//        bubble_sort(arr_ordered, n);
//    }
//    for (i=0; i<5; i++)
//        printf("%d ", arr_ordered[n-i-1]);
//    return 0;
//}

#include <stdio.h>
#include <math.h>

void find(int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        int sum = 0;
        int curr = i;
        while (curr)
        {
            sum += (int)pow(curr % 10, 4);
            curr /= 10;
        }
        if (sum == curr)
            printf("%d ", curr);
    }
}

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    find(l, r);
    return 0;
}