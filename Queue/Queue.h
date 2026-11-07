#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned* queueMembers;
	unsigned head;
	unsigned numOfElements;
	unsigned size;
} Queue;

void initQueue(Queue* q, unsigned  siintze);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* q);
bool isFull(Queue* q);

#endif /* QUEUE_H */