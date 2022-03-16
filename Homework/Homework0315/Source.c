#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* b = *(aa + 1);
	int* ptr2 = (int*)(*(aa + 1)); //aa是二维数组首元素，即第一行数组的地址，数组指针+1就是下一个数组，即指向第二行数组，*(aa+1)=aa[1]
	//*(a+1)=a[1]
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}