/*����ʮ��������ͳ�������ܱ�3���������м�������ѭ����*/
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i,n=0;
    cout<<"������10������:";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    if (a[i]%3==0)n++; 
    cout<<"�ܱ������������ĸ���Ϊ:"<<n<<endl;
    return 0;
}