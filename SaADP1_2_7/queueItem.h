#pragma once
struct QueueItem
{
	char data;
	QueueItem* pNext;
};

void init(QueueItem*& pFirst, QueueItem*& pLast);

bool isEmpty(QueueItem* pFirst, QueueItem* pLast);

void addItem(QueueItem*& pFirst, QueueItem*& pLast, char data);

void addNumbOfItems(QueueItem*& pFirst, QueueItem*& pLast, int numbOfItems);

bool deleteItem(QueueItem*& pFirst, QueueItem*& pLast);

int deleteNumbOfItems(QueueItem*& pFirst, QueueItem*& pLast, int numbOfItems);

void printQueue(QueueItem*& pFirst, QueueItem*& pLast);

void clearMemory(QueueItem*& pFirst, QueueItem*& pLast);