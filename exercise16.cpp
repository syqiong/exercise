/*16������������n�����쳲���������ǰn���ֵ��쳲��������У�1��1��2��3��5��8��......��
ע�⣺�ٵ�����nֵΪС��1ʱ�����error(������ʵ��)
      �����ÿ��ֵһ���ո�ָ���ÿ�ĸ�ֵռһ��*/
#include <iostream>
using namespace std;
int fib(int i)
{
    if(i==1||i==2)
    {
        return 1;
    } 
    return fib(i-2)+fib(i-1) ;
}
int main()
{
    int a;
    cin>>a;
    if(a<1)
    {
        cout<<"error";
    }
    for(int i=1;i<=a;i++)
    {
        if(i%4==0)
        {
            cout<<endl;
        }
        cout<<fib(i)<<"";
    }
}