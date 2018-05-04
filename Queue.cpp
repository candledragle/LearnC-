#include "Queue.h"

void push(dataType data)
{

	if (NULL == head1)
	{
		head1 = tail1;
	}
	Node* node = new Node();
	node->data = data;
	tail1->next = node;
	tail1 = node;
}

dataType pop()
{
	if (head1 == NULL)
	{
		return -1;
	}
	Node* temp = head1;
	head1 = head1->next;
	delete temp;
	return head1->data;
}