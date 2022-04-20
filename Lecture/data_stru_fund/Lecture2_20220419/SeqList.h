#include <stdio.h>

#pragma once

#define N 100
typedef int SLDataType;

//数据必须从第一个位置开始，连续存储
//静态顺序表不实用
typedef struct SeqList
{
	SLDataType* a; //指向动态数组指针
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);

void SLPrint(SL* ps);
//头插/头删
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

void SLCheckCapacity()
