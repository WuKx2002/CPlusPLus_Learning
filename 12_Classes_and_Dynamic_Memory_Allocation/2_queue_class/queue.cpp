#include "queue.h"
#include <cstdlib>
using namespace std;

Queue::Queue(int qs) : qsize(qs), front(0), rear(0), items(0)
{
}

Queue::~Queue()
{
    Node *temp;
    while (front != 0)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::enQueue(const Item &item)
{
    if (isFull())
        return false;

    Node *add = new Node;
    add->item = item;
    add->next = 0;
    items++;
    
    if (front == 0)
        front = add;
    else
        rear->next = add;
    rear = add;

    return true;
}

bool Queue::deQueue(Item &item)
{
    if (front == 0)
        return false;
    item = front->item;
    items--;

    Node *temp = front;
    front = front->next;
    delete temp;

    if (items == 0)
        return 0;
    
    return true;
}





