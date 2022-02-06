#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m = 0;
	scanf("%d%d", &n, &m);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((m >> i) ^ (n >> i))
		{
			count++;
		}
	}
	printf("Count=%d\n", count);
	return 0;
}