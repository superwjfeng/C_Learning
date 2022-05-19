#include "heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void Swap(HPDataType* child, HPDataType* parent)
{
	HPDataType tmp = *child;
	*child = *parent;
	*parent = tmp;
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		php->capacity *= 2;
		HPDataType* ptr = (HPDataType*)realloc(php->a, php->capacity * sizeof(HPDataType));
		if (ptr == NULL)
		{
			perror("realloc\n");
			exit(-1);
		}
		php->a = ptr;
	}
	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

void HeapPop(HP* php);

HPDataType HeapTop(HP* php);

bool HeapEmpty(HP* php);

int HeapSize(HP* php);