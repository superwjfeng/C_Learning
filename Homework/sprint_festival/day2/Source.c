#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void test()
{
	int i = 0;
	i++;
	printf("%d ", i);
}

int main()
{
	int i = 0;
	for (i = 0; i < 5; i++);
	{
		test();
	}
	return 0;
}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n += 1;
//	i++;
//	return f(n);
//}
//
//int main()
//{
//	int ret = f(1);
//	printf("%d\n", ret);
//	return 0;
//}