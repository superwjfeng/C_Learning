#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int a = 1;
	//int b = (++a) + (++a) + (++a);
	//printf("%d\n", b);

	int a = 0x11223344;
	int* pa = &a;
	printf("%p", pa);
	*pa = 0;
	//char* pa = &a;
	//*pa = 0; //这种情况下解引用只能操作一个字节
	
	return 0;
}