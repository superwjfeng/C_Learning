#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* BuyListNode(LTDataType x);

LTNode* ListInit();

void ListPushBack(LTNode* phead, LTDataType x);
