#include "SeqList.h"

void SLInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d", ps->a[i]);
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1); //直接终止程序
		}

		ps->a = tmp;
		ps->capacity = newCapacity;

	}
	ps->a[ps->size] = x;
	ps->size++;
}

void SLPushFront(SL* ps, SLDataType x)
{
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}

