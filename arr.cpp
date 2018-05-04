#include "arr.h"
#include <iostream>
using namespace std;

void sum_arr(const int *begin, const int *end)
{
	const int *pt;
	int sum = 0;
	for (pt = begin; pt != end;pt++){
		cout << *pt << endl;
		sum += *pt;
	}
	cout << sum << endl;
}

void sayHehe()
{

	printf("hehe\n");
}