#pragma once
struct QueueItem
{
	int data;
	QueueItem* pNext;
};

void init(QueueItem*& pFirst, QueueItem*& pLast);

bool isEmpty(QueueItem* pFirst, QueueItem* pLast);

void addItem(QueueItem*& pFirst, QueueItem*& pLast, int data);

void deleteItem(QueueItem*& pFirst, QueueItem*& pLast);

void printQueue(QueueItem*& pFirst, QueueItem*& pLast);