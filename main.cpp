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

	/*
		char 数组
		用括号括起来的字符串常量（也称为字符串字面值）
		被设置为字符串的地址的char指针
	*/

	char ghost[15] = "12345678912345";
	char *str = "dadadad";
	int n1 = strlen(ghost);
	int n2 = strlen(str);
	int n3 = strlen("2323s");

	printf("%d\n",n1);
	printf("%d\n",n2);
	printf("%d\n",n3);
	//using namespace std;
	//sayHello();
	//cout << "hello" << endl;
	//sayHehe();
	
	//int arr[8] = {1,2,3,4,5,6,7,8};

	//sum_arr(arr + 2, arr + 5);
	/*if (NULL == head)
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
*/
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