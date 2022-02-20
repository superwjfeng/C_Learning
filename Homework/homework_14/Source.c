#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////Problem 1
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int bottle = money;
//	int count = bottle;
//	while (bottle != 1)
//	{
//		bottle /= 2;
//		count += bottle;
//	}
//	printf("Money: %d\n", money);
//	printf("Total: %d\n", count-1);
//
//	return 0;
//}

////Problem 2
//
//void odd_sort(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		if (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//}
//
//int main()
//{
//	int arr[6] = { 3,2,4,5,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	odd_sort(arr, sz);
//	return 0;
//}
