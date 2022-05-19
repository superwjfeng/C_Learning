/*
//树的度是6
struct Tree
{
	int data;
	struct TreeNode* child1;
	struct TreeNode* child2;
	struct TreeNode* child3;
	struct TreeNode* child4;
	struct TreeNode* child5;
	struct TreeNode* child6;
};

//树的度不确定
typedef struct TreeNode* SLDataType;
struct TreeNode
{
	int data;
	//struct TreeNode* childArray[N]; //静态
	
	SeqList _childs;
};

//左孩子右兄弟
typedef int DataType;
struct TreeNode
{
	struct TreeNode* firstChild1; //第一个孩子结点
	struct TreeNode* pNextBrother; //指向其下一个兄弟结点
	DataType data; //结点中的数据域
}; 
*/

#include "heap.h"

int main()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	for ()
	{
		HeapPush(&hp, a[i]);
	}
	return 0;
}
