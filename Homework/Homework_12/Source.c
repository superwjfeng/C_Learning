#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////Problem 6
//int main()
//{
//	int n, m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int m_1bit = (m >> i) & 1;
//		int n_1bit = (n >> i) & 1;
//		if (1 == (m_1bit ^ n_1bit))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


////Problem 7
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num_even, num_odd = 0;
//
//	printf("Even:\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		num_odd = (n >> i) & 1;
//		printf("%d ", num_odd);
//	}
//
//	printf("\n");
//	printf("Odd\n");
//
//	for (i = 30; i >= 0; i -= 2)
//	{
//		num_even = (n >> i) & 1;
//		printf("%d ", num_even);
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if ((n >> i) & 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

void swap(int a, int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d, %d", a, b);
}

int main()
{
	int a, b = 0;
	scanf("%d%d", &a, &b);
	swap(a,b);
	return 0;
}
