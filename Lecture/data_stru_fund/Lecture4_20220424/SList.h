#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** pphead, SLTDataType x);