#include <iostream>
using namespace std;

//显示数组及用const保护数组
void show_array(const double ar[],int n);
//const 声明表示指针ar指向的是常量数据，这意味着不能使用ar修改该数据
// 1.不意味着原始数组必须是常量
// 2.意味着不能在show_array()函数中使用ar来修改这些数据

int main()
{
    //cout << "Hello world!" << endl;
    double ar[3] = {1,2,3};
    show_array(ar,3);
    return 0;
}

void show_array(const double ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << "property #"<<(i + 1)<<": $";
        cout << ar[i] <<endl;
    }
}
