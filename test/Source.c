#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	char ch[10] = { 0 };
	//gets(ch);
	//puts(ch);
	fgets(ch, 10, stdin);
	puts(ch);
	return 0;
}


