#include <iostream>
#include <windows.h> 
#include <conio.h>
#include <ctime>
#include "userInterface.h"
#include "queueItem.h"

void work(QueueItem*& pFirst, QueueItem*& pLast)
{
	char key = 'g';
	while (key != 'q')
	{
		int randomizer = rand() % 100 + 1;
		if (randomizer % 2 != 0)
		{
			std::cout << "   Delete operation." << std::endl;
			if (!isEmpty(pFirst, pLast))
			{
				int numbOfItems = randomCount(MinNumbOfItems, MaxNumbOfItems);
				int numbOfDelItems = deleteNumbOfItems(pFirst, pLast, numbOfItems);
				std::cout << "   Quantity of deleted items: " << numbOfDelItems << std::endl;
			}
			else
				std::cout << "   The queue is empty. Nothing to delete." << std::endl;
		}
		else
		{
			std::cout << "   Add operation." << std::endl;
			int numbOfItems = randomCount(MinNumbOfItems, MaxNumbOfItems);
			addNumbOfItems(pFirst, pLast, numbOfItems);
			std::cout << "   Quantity of added items: " << numbOfItems << std::endl;
		}

		printQueue(pFirst, pLast); 
		Sleep(2000);
		std::cout << std::endl;
		std::cout << "   q + ENTER = exit. " << std::endl;

		if (_kbhit()) { key = _getch(); }
	}
}

int randomCount(int minNumber, int maxNumber)
{
	return minNumber + rand() % (maxNumber - minNumber + 1);
}

char randomSymbol()
{
	int asciiVal = randomCount(ASCIImin, ASCIImax);
	char asciiChar = static_cast<char>(asciiVal);
	return asciiChar;
}