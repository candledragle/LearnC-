#include <iostream>

/*

ѧϰ�ʼǣ�
int sum_arr(int arr[],int n);
arr ʵ���ϲ��������飬����һ��ָ�롣
c++ ������������Ϊ���һ��Ԫ�صĵ�ַ��arr == &arr[0];
1. ���ҽ������ں���ͷ����ԭ����,int *arr��int arr[]�ĺ��������ͬ�ġ�
������ζ��arr��һ��intָ�롣�����������ʾ����int arr[]�������û�,arr����ָ��int ��ָ��int�����еĵ�һ��Ԫ�ء�
*/

using namespace std;
const int ArSize =8;
int sum_arr(int arr[],int n);
//��ͬ�ĺ���ͷ
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
        ֤����������һ����ַ���������һ��Ԫ�صĵ�ַ
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
        ֤����������һ����ַ���������һ��Ԫ�صĵ�ַ
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

