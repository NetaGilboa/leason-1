#include <iostream>
#include "LinkedList.h"

void addNode(LinkedList* list, unsigned int newValue)
{ 
	Node* newNode = new Node;
	newNode->value = newValue;
	newNode->next = list->head;
	list->head = newNode;
}
int removeNode(LinkedList* list)
{
	Node* temp = list->head;
	if (temp != nullptr)
	{
		list->head = list->head->next;
		return temp->value;
	}
	return -1;
}
