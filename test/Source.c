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

#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch))
        printf("%c is an alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);

    return 0;
}