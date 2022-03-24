#include <iostream>
#include "queueItem.h"
#include "userInterface.h"

int main()
{
    int numberOfItems = 0;
    QueueItem* pFirst = new QueueItem;
    QueueItem* pLast = new QueueItem;
    init(pFirst, pLast);
    work(pFirst, pLast);
    clearMemory(pFirst, pLast);
}
