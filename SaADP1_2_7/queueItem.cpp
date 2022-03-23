#include <iostream>
#include "queueItem.h"

void init(QueueItem*& pFirst, QueueItem*& pLast)
{
	pFirst->pNext =  NULL;
	pLast = pFirst;
}

bool isEmpty(QueueItem* pFirst, QueueItem* pLast)
{
	if (pFirst == pLast) { return true; }
	else { return false; }
}

void addItem(QueueItem*& pFirst, QueueItem*& pLast, int data)
{
	if (isEmpty(pFirst, pLast))
	{
		pFirst->pNext = pLast;
	}
	QueueItem* temporary = new QueueItem;
	temporary->data = data;
	temporary->pNext = NULL;
	pLast->pNext = temporary;
	pLast = temporary;
}

void deleteItem(QueueItem*& pFirst, QueueItem*& pLast)
{
	QueueItem* temporary = new QueueItem;
	if (!isEmpty(pFirst, pLast))
	{
		temporary = pFirst->pNext;
		pFirst->pNext = temporary->pNext;
		delete temporary;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "   The queue is empty. Nothing to delete." << std::endl;
		std::cout << std::endl;
	}
}

void printQueue(QueueItem*& pFirst, QueueItem*& pLast)
{
	if (isEmpty(pFirst, pLast))
	{
		std::cout << std::endl;
		std::cout << "   The queue is empty. Nothing to print." << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << std::endl;
		QueueItem* current = pFirst->pNext;
		while (current != NULL)
		{
			std::cout << "   " << current->data << std::endl;
			current = current->pNext;
		}
		std::cout << std::endl;
	}
}