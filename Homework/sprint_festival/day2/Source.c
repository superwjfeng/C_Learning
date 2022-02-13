#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Problem 2

void arith_seq(int n)
{
	int result = 2 * n + (n * (n - 1) * 3) / 2;
	printf("%d\n", result);
}

int main()
{
	int n = 0;
	while (EOF != scanf("%d", &n))
	{
		arith_seq(n);
	}
	return 0;
}

