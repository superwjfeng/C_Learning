#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

//void FiboGene(void)
//{
//    int fib[100] = { 0 };
//    fib[0] = 0;
//    fib[1] = 1;
//    int i = 0;
//    for (i = 2; i < 100; i++)
//    {
//        if (fib[i] > 1000000)
//        {
//            break;
//        }
//        fib[i] = fib[i - 1] + fib[i - 2];
//    }
//}
//
//int main()
//{
//    //int n = 0;
//    //scanf("%d", &n);
//    FiboGene();
//    return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int f0 = 0;
	int f1 = 1;
	int f2;
	while (1)
	{
		f2 = f0 + f1;
		if (n <= f2)
		{
		//	printf("%d\n", ((n - f1) - (f2 - n)) ? (n - f1) : (f2 - n));
			if ((f2 - n) < (n - f1))
			{
				printf("%d", f2 - n);
			}
			else
			{
				printf("%d", n - f1);
			}
			break;
		}
		else
		{
			f0 = f1;
			f1 = f2;
		}
	}
	return 0;
}
