#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "customer.h"

typedef Customer Item;

class Queue
{
static const int Q_SIZE = 10;
private:
    struct Node { Item item; struct Node *next; };
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    //Queue(const Queue &q) : qsize(0) { }
    //Queue &operator=(const Queue &q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isEmpty() const { return  items == 0; }
    bool isFull() const { return  items == qsize; }
    int queueCount() const { return  items; }
    bool enQueue(const Item &item);
    bool deQueue(Item &item);
    
};
#endif // __QUEUE_H__