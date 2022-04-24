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

void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode); 

	//SLTNode* cur = phead;
	//while (cur != NULL)
	//{
	//	cur = cur->next;
	//}

	//cur = newnode;

	newnode->data = x;
	newnode->next = NULL;

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
