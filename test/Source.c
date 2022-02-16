#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fun(int x)
{
	return (x == 1) ? 1 : (x + fun(x - 1));
}

int main()
{
	char str[] = { 0 };
	printf("%d", fun(10));
	return 0;
}
