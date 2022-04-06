#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct S
{
	int num;
	double d;
	int arr[]; //柔性数组
	//int arr[0]; //arr[0]也表示柔性数组
};

int main()
{
	printf("%d", sizeof(struct S));
	struct S3* ps = (struct S3*)malloc(sizeof(struct S) + 40);
	free(ps);
	return 0;
}