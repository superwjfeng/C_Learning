#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

struct S1
{
	char c1; //1
	int i; //4
	char c2; //1
};

struct S2
{
	char c1;
	char c2;
	int i;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

//offsetof - 宏
//计算结构体成员相对于起始位置的偏移量

//int main()
//{
//	struct S1 s;
//	struct S2 s2;
//	struct S3 s3;
//	struct S4 s4;
//	//printf("%d\n", sizeof(s));
//	//printf("%d\n", sizeof(s2));
//	//printf("%d\n", sizeof(s3));
//	printf("%d\n", sizeof(s4));
//	printf("%d\n", offsetof(struct S3, d));
//	printf("%d\n", offsetof(struct S3, c));
//	printf("%d\n", offsetof(struct S3, i));
//	return 0;
//}

////修改默认对齐数
//#pragma pack(4) //取2^n次
////#pragma pack(1)//不对齐
//struct S
//{
//	char c;
//	double d;
//};
//#pragma pack()
//
//int main()
//{
//	return 0;
//}

//struct A
//{//位段的写法要符合实际需求
//	int _a : 2; //这个成员占2个bit位，只能放00，01，10，11
//	int _b : 5; //这个成员占5个bit位
//	int _c : 10;
//	int _d : 30;
//};
//
//struct AA
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct AA));
//
//	return 0;
//}

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	enum Sex s = MALE;
	enum Sex s2 = FEMALE;	
	enum Day d = Fri;
	enum Color C = GREEN;
	return 0;
}
