#include <iostream>
#include "queueItem.h"

int main()
{
    int numberOfItems = 0;
    QueueItem* pFirst = new QueueItem;
    QueueItem* pLast = new QueueItem;

    init(pFirst, pLast);
    addItem(pFirst, pLast, 0);
    addItem(pFirst, pLast, 1);
    addItem(pFirst, pLast, 2);
    addItem(pFirst, pLast, 3);
    addItem(pFirst, pLast, 4);
    printQueue(pFirst, pLast);
    deleteItem(pFirst, pLast);
    deleteItem(pFirst, pLast);
    printQueue(pFirst, pLast);
    addItem(pFirst, pLast, 5);
    addItem(pFirst, pLast, 7);
    addItem(pFirst, pLast, 8);
    printQueue(pFirst, pLast);
}
