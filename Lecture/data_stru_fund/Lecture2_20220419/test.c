#include "SeqList.h"
////Fibnacci数列的递归实现算法复杂度达到了2^n，因此这种递归只有理论价值，没有实际价值。要使用循环实现
//long long Fib(int N)
//{
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2); 
//}
//
//long long Fib(int N)
//{
//	if (N < 3)
//		return 1;
//	long f1 = 1;
//	long f2 = 1;
//	long tmp = 0;
//	for (int i = 3; i <= N; i++)
//	{
//		tmp = f1;
//		f1 = f1 + f2;
//		f2 = tmp;
//	}
//	return f1;
//}
//
//
//int main()
//{
//	printf("%lld", Fib(40));
//	return 0;
//}



void TestSeqList1()
{
	SL sl;
	SLInit(&sl);
}

int main()
{
	TestSeqList1();
	return 0;
}
