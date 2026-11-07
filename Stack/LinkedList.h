#ifndef LINKEDLISTH
#define LINKEDLISTH

typedef struct Node
{
    unsigned value;
    Node* next;
} Node;

typedef struct LinkedList
{
	Node* head;
} LinkedList;

void addNode(LinkedList* list, unsigned int newValue);
int removeNode(LinkedList* list);

#endif