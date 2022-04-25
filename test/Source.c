#define _CRT_SECURE_NO_WARNINGS

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

//#include <stdio.h>
//#include <math.h>
//
//void find(int l, int r)
//{
//    for (int i = l; i <= r; i++)
//    {
//        int sum = 0;
//        int curr = i;
//        while (curr)
//        {
//            sum += (int)pow(curr % 10, 4);
//            curr /= 10;
//        }
//        if (sum == curr)
//            printf("%d ", curr);
//    }
//}
//
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    find(l, r);
//    return 0;
//}

////1.常规方法，时间复杂度为O(n*k)，最坏情况下为O(n^2)，空间复杂度为O(1)
// 向左轮转
//#include <stdio.h>
//
//void reverse(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize - 1; i++)
//    {
//        nums[i] = nums[i + 1];
//    }
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = nums[0];
//        reverse(nums, numsSize);
//        nums[numsSize - 1] = tmp;
//    }
//}
//
//int main()
//{
//    int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 3;
//    rotate(nums, numsSize, k);
//    return 0;
//}

////向右轮转
//#include <stdio.h>
//
//void reverse(int* nums, int numsSize)
//{
//    for (int i = numsSize - 2; i >= 0; i--) //注意这里拷贝的顺序，如果写反了会被覆盖
//    {
//        nums[i + 1] = nums[i];
//    }
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = nums[numsSize-1];
//        reverse(nums, numsSize);
//        nums[0] = tmp;
//    }
//}
//
//int main()
//{
//    int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 10;
//    rotate(nums, numsSize, k);
//    return 0;
//}

//////2.常规方法，拿空间换时间，时间复杂度为O(n)，空间复杂度为O(n)
//#include <stdio.h>
//
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    int split[100000] = { 0 };
//    int i = 0;
//    for (i = 0; i < k; i++)
//        split[i] = nums[numsSize - k + i];
//    for (i = 0; i < numsSize - k; i++)
//        split[i + k] = nums[i];
//    for (i = 0; i < numsSize; i++)
//        nums[i] = split[i];
//}
//
//int main()
//{
//    int nums[4] = { -1, -100, 3, 99 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 2;
//    rotate(nums, numsSize, k);
//
//    return 0;
//}

////3.好方法，先n部分逆序，再n-k部分逆序，最后整体逆序，时间复杂度为O(n)，空间复杂度为O(1)
//void swap(int* nums, int L, int R)
//{
//    int tmp = 0;
//    while (L < R)
//    {
//        tmp = nums[L];
//        nums[L] = nums[R];
//        nums[R] = tmp;
//        L++;
//        R--;
//        tmp = 0;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//    k %= numsSize;
//    swap(nums, 0, numsSize - k - 1);
//    swap(nums, numsSize - k, numsSize - 1);
//    swap(nums, 0, numsSize - 1);
//}
//
//int main()
//{
//    int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int k = 10;
//    rotate(nums, numsSize, k);
//    return 0;
//}

#include <stdio.h>
#include <string.h>

int is_prime(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (!(n % i))
            count++;
    }
    if (!count)
        return 1;
    else
        return 0;
}

int main()
{
    char str[101] = { 0 };
    char alphabet[26] = { 0 };
    char ch = 0;
    int max = 0;
    int min = 100;
    while ((ch = getchar()) != '\n')
    {
        alphabet[ch - 97]++;
        if (alphabet[ch - 97] > max)
            max = alphabet[ch - 97];
        if (alphabet[ch - 97] < min)
            min = alphabet[ch - 97];
    }

    if (is_prime(max - min))
        printf("Lucky Word\n%d", max - min);
    else
        printf("No Answer\n%d", max - min);

    return 0;
}
