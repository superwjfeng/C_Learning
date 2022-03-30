#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S
{
	int num;
	double d;
	int arr[]; //柔性数组
	//int arr[0]; //arr[0]也表示柔性数组
};

int main()
{
	return 0;
}