#include <iostream>
using namespace std;

//��ʾ���鼰��const��������
void show_array(const double ar[],int n);
//const ������ʾָ��arָ����ǳ������ݣ�����ζ�Ų���ʹ��ar�޸ĸ�����
// 1.����ζ��ԭʼ��������ǳ���
// 2.��ζ�Ų�����show_array()������ʹ��ar���޸���Щ����

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
