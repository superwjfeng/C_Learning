#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test(void)
{
	;
}

int check_sys()
{
	int a = 1;
	//char* p = (char*)&a;
	//return *p;
	return *(char*)&a;
}

//int main()
//{
	//int a = 1;
	//char* p = (char*)&a;
	//if (*p == 1)
	//{
	//	printf("Big endian");
	//}
	//else
	//{
	//	printf("Little endian");
	//}
	//return 0;

//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("Big endian");
//	}
//	else
//	{
//		printf("Little endian");
//	}
//	return 0;
//}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
}
