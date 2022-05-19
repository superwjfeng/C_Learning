#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a; //数组
	int size;
	int capacity;
}HP;

void HeapInit(HP* php);

void HeapDestroy(HP* php);

void Swap(HPDataType* child, HPDataType* parent);

void AdjustUp(HPDataType* a, int child);//向上调整

void HeapPush(HP* php, HPDataType x);

void HeapPop(HP* php);

HPDataType HeapTop(HP* php);

bool HeapEmpty(HP* php);

int HeapSize(HP* php);
