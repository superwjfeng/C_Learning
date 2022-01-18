#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int get_max(int x, int y)
{
	//return (x > y ? x : y);
	if (x > y)
		return x;
	else
		return y;
}

//int x, int y称为函数的形参 Formal parameter
//当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
void swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

//通过指针使swap2内部和swap2(a,b)给的实参变量之间建立真正的联系
void swap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	//char arr1[] = "abcdef";
	//char arr2[20] = "XXXXXXXX";
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);

	//char arr[] = "Hello bit";
	//memset(arr, 'X', 5);
	//printf("%s\n", arr);
	//return 0;

	//int a, b = 0;
	//scanf("%d %d", &a, &b);
	//int m = get_max(a, b);
	//printf("%d\n", m);

	int a, b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	//a,b称为实参 Actual parameter
	//swap1(a, b);
	swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);

}