//#include "Queue.h"
//#include "arr.h"
//#include "hello1.h"
#include <iostream>
using namespace std;
typedef int dataType;

typedef struct Node{

	dataType data;
	struct Node *next;
}HaHa,*pointer;

pointer head,tail;

void push23(dataType data);
dataType pop23();

int main()
{
	//using namespace std;
	//sayHello();
	//cout << "hello" << endl;
	//sayHehe();
	
	//int arr[8] = {1,2,3,4,5,6,7,8};

	//sum_arr(arr + 2, arr + 5);
	if (NULL == head)
	{
		head = tail;
		cout << "hahha" << endl;
	}
	push23(1);
	push23(2);
	push23(3);
	
	int current = pop23();
	while(-1 != current)
	{
		printf("%d\n", current);
		current = pop23();
	}
	cout << "hello world!" << endl;

	return 0;
}

void push23(dataType data)
{
	HaHa *node = new HaHa();
	node->data = data;

	if (NULL == head)
	{
		head = tail = node;
	}else{
		tail->next = node;
		tail = node;
	}
}

dataType pop23()
{
	if (head == NULL)
	{
		return -1;
	}
	Node* temp = head;
	head = head->next;
	dataType ret = temp->data;
	delete temp;
	return ret;
}