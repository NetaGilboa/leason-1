#include <iostream>
#include <cstdlib>
#include "Queue.h"

void initQueue(Queue* q, unsigned siintze)
{
	 q->queueMembers = static_cast<unsigned*>(std::malloc(siintze * sizeof(unsigned)));
	 q->head = 0;
	 q->numOfElements = 0;
	 q->size = siintze;
}
void cleanQueue(Queue* q)
{
	q->head = 0;
	q->numOfElements = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->queueMembers[(q->numOfElements + q->head) % q->size] = newValue;
		q->numOfElements++;
	}
}
int dequeue(Queue* q)
{
	if (!isEmpty(q))
	{
		int dequeued = q->queueMembers[q->head];
		q->head++;
		q->numOfElements--;
		if (q->head >= q->size)
		{
			q->head = 0;
		}
		return dequeued;

	}
	return -1;
}

bool isEmpty(Queue* q)
{
	if (q->numOfElements == 0)
	{
		return true;
	}
	return false;
}
bool isFull(Queue* q)
{
	if (q->numOfElements == q->size)
	{
		return true;
	}
	return false;
}