#include <iostream>
#include "queueItem.h"
#include "userInterface.h"

int main()
{
    QueueItem* pFirst = new QueueItem;
    QueueItem* pLast = new QueueItem;
    init(pFirst, pLast);
    work(pFirst, pLast);
    clearMemory(pFirst, pLast);
}
