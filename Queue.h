#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
typedef int dataType;

typedef struct Node{

	dataType data;
	struct Node* next; 
}*Point;

Point head1;
Point tail1;

void push(dataType data);
dataType pop();

#endif