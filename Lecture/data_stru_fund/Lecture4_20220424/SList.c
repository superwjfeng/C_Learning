#include "SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* curr = phead;
	while (curr)
	{
		printf("%d->", curr->data);
		curr = curr->next;
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);

	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
////curr是一个局部变量，SListPushBack调用结束后被销毁，所以下面这么写是错误的
////同时
//void SListPushBack(SLTNode* phead, SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	assert(newnode);
//
//	SLTNode* curr = phead;
//	while (curr)
//	{
//		curr = curr->next;
//	}
//	curr = newnode;
//}

////这里的问题是我们的目标是要改变传入的实参指针变量plist，但对形参指针变量phead的改变不能影响plist，因此要传入二级指针 
//void SListPushBack(SLTNode* phead, SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	assert(newnode);
//	newnode->data = x;
//	newnode->next = NULL;
//
//	//一开始结点为空，空指针解引用出错
//	if (phead == NULL)
//		phead = newnode;
//	else
//	{
//		SLTNode* tail = phead;
//		//找尾结点
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		//把newnode的地址放到tail->next指针里才算是连接起来了
//		tail->next = newnode;
//	}
//}

void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	//一开始一个结点都没有
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾结点
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}     
}

void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead; //把原来的头结点的地址给新的头结点的next
	*pphead = newnode;  //把新的newnode的地址给到phead
}

////下面这么写是错的，顺序反了，如果先free，那么动态开辟出来的结构体中所存储的下一结点的地址就没了
//void SListPopFront(SLTNode** pphead)
//{
//	free(*pphead);
//	*pphead = (*pphead)->next;
//}

void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SListPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead); //没有结点
	if ((*pphead)->next == NULL)//只有一个结点
	{
		free(*pphead);
		*pphead = NULL;
	}
	else //还有多个结点
	{
		SLTNode* tailPrev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tailPrev = tail;
			tail = tail->next;
		}

		free(tail);
		tailPrev->next = NULL;

		/*
		SLTNode* tail = *pphead;
		while (tail->next->next)
			tail = tail->next;
		free(tail->next);
		tail->next = NULL;
		*/
	}
}

//查找的附带作用是修改
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	assert(pphead);
	if (pos == *pphead) //要插入的是第一个结点
		SListPushFront(pphead, x);
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
			prev = prev->next;

		SLTNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)
		SListPopFront(pphead); //删除的是第一个结点
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
			prev = prev->next;

		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	//SLTNode* newnode = BuySListNode(x);
	//newnode->next = pos->next;
	//pos->next = newnode;

	//不在乎链接的顺序
	SLTNode* newnode = BuySListNode(x);
	SLTNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}

void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLTNode* del = pos->next;
	//pos->next = pos->next->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}
