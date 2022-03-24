#include <iostream>
#include "queueItem.h"
#include "userInterface.h"

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

void addItem(QueueItem*& pFirst, QueueItem*& pLast, char data)
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

void addNumbOfItems(QueueItem*& pFirst, QueueItem*& pLast, int numbOfItems)
{
	for (int i = 0; i < numbOfItems; i++)
	{
		char data = randomSymbol();
		addItem(pFirst, pLast, data);
	}
}

bool deleteItem(QueueItem*& pFirst, QueueItem*& pLast)
{
	QueueItem* temporary;
	if (!isEmpty(pFirst, pLast))
	{
		temporary = pFirst->pNext;
		pFirst->pNext = temporary->pNext;
		delete temporary;
		if (pFirst->pNext == NULL) { pLast = pFirst; }
		return true;
	}
	else
	{
		return false;
	}
}

int deleteNumbOfItems(QueueItem*& pFirst, QueueItem*& pLast, int numbOfItems)
{
	bool check = true;
	int numbOfDelItems = 0;
	for (int i = 0; i < numbOfItems; i++)
	{
		check = deleteItem(pFirst, pLast);
		if (check == false)
		{
			std::cout << "   The queue is empty. Nothing to delete." << std::endl;
			return numbOfDelItems;
			break;
		}
		numbOfDelItems++;
	}
}

void printQueue(QueueItem*& pFirst, QueueItem*& pLast)
{
	if (isEmpty(pFirst, pLast))
	{
		std::cout << "   Nothing to print." << std::endl;
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