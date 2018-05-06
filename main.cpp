#include <iostream>
#include <string>
using namespace std;
typedef int dataType;
const int SIZE = 5;

typedef struct Node{

	dataType data;
	struct Node *next;
}HaHa,*pointer;

pointer head,tail;

void push23(dataType data);
dataType pop23();
int c_in_str(const char *str,char ch);
char* buildStr(char ch,int length);
void display(const string sa[], int n);

int main()
{

	/*
		�ַ������ַ�������������ַ�������һ�������ַ�'\0',�ַ�����û��
	*/
	int n = 4;

	while (n-->0 )
	{
		printf("%d",n);
	}
	printf("\n");

	/*
		�����ַ���
	*/
	char* str1 = buildStr('a',4);
	cout << str1 << endl;

	/*
	  ��֤�ַ����Ľ������Ƿ�������
	*/
	while (*str1)
	{
		cout << *str1 << endl;
		str1++;
	}

	/*
		char ����
		���������������ַ���������Ҳ��Ϊ�ַ�������ֵ��
		������Ϊ�ַ����ĵ�ַ��charָ��
	*/

	char ghost[15] = "12345678912345";
	char *str = "dadadad";
	int n1 = strlen(ghost);
	int n2 = strlen(str);
	int n3 = strlen("2323s");

	printf("%d\n",n1);
	printf("%d\n",n2);
	printf("%d\n",n3);

	//�����ַ���ghost���ַ�'1'���ֵĴ���
	int count =c_in_str(ghost,'1');
	printf("�ַ�1���ֵĴ����ǣ�%d\n",count);

	
	string list[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ":";
		getline(cin,list[i]);
	}

	cout << "your list:\n";
	display(list,SIZE);
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

	//�ͷ��ڴ�
	delete[] str1;
	return 0;
}

void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ":" << sa[i] << endl;
	}
}

char* buildStr(char ch,int n)
{
	//�����ַ�����
	char* pStr =new char[n+1];
	//��ӽ����ַ�
	pStr[n] = '\0';
	while (n-->0)
	{
		pStr[n] = ch;
	}

	return pStr;
}

int c_in_str(const char *str,char ch)
{

	int sum =0;
	while (*str)
	{
		if (*str == ch)
		{ 
			sum++;
		}
		str++;
	}
	return sum;
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