#pragma once
#include "queueItem.h"
enum UserInterface
{
	MinNumbOfItems = 1,
	MaxNumbOfItems = 3,
	ASCIImin = 65,
	ASCIImax = 90
};
void work(QueueItem*& pFirst, QueueItem*& pLast);

int randomCount(int minNumber, int maxNumber);

char randomSymbol();