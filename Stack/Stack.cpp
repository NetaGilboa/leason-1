#include "Stack.h"
#include "LinkedList.h"

void push(Stack* s, unsigned int element)
{
	addNode(s->list, element);
}
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}
	return removeNode(s->list);
}

void initStack(Stack* s)
{
	s->list = new LinkedList;
	s->list->head = nullptr;
}
void cleanStack(Stack* s)
{
	delete s->list;
}

bool isEmpty(Stack* s)
{
	if (s->list == nullptr || s->list->head == nullptr)
	{
		return true;
	}
	return false;
	
}
bool isFull(Stack* s)
{
	return false;
}
