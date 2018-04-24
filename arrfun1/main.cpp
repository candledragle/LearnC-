#include <iostream>

/*

学习笔记：
int sum_arr(int arr[],int n);
arr 实际上并不是数组，而是一个指针。
c++ 将数组名解释为其第一个元素的地址：arr == &arr[0];
1. 当且仅当用于函数头获函数原型中,int *arr和int arr[]的含义才是相同的。
它们意味着arr是一个int指针。不过，数组表示法（int arr[]）提醒用户,arr不仅指向int 还指向int数组中的第一个元素。
*/

using namespace std;
const int ArSize =8;
int sum_arr(int arr[],int n);
//等同的函数头
int sum_arr2(int *arr,int n);

int main()
{
    int cookies[ArSize] = {1,2,3,4,5,12,34,45};
    int sum = sum_arr(cookies,ArSize);
    int sum2 = sum_arr2(cookies,ArSize);
    cout<<"the result is "<< sum <<endl;
    cout<<"the result is "<< sum2 <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

int sum_arr(int arr[],int n)
{
    /*
        证明数组名是一个地址并且是其第一个元素的地址
    */
    printf("the value of arr %p\n",arr);
    printf("the address of arr[0] is %p\n",&arr[0]);
    int total =0;
    for(int i=0;i<n;i++)
    {
        total += total+arr[i];
    }

    return total;
}

int sum_arr2(int *arr,int n)
{
    /*
        证明数组名是一个地址并且是其第一个元素的地址
    */
    printf("the value of arr %p\n",arr);
    //printf("the address of arr[0] is %p\n",&arr[0]);
    int total =0;
    for(int i=0;i<n;i++)
    {
        total += total+arr[i];
    }

    return total;
}

