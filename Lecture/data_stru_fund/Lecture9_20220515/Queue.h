#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS

typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	//int size;
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);

void QueueDestroy(Queue* pq);

void QueuePush(Queue* pq, QDataType x);

void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);

QDataType QueueBack(Queue* pq);

bool QueueEmpty(Queue* pq);

int QueueSize(Queue* pq);


