#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    float delta,x1,x2;
    const float zero=0.0001;        //��һ����С�ĳ���
    cout<<"����3��ϵ��a(a!=0),b,c:"<<endl;
    cin>>a>>b>>c;
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<endl;
    delta=b*b-4*a*c;
    if(fabs(delta)<zero)     //����ֵ��С����������Ϊ��0      
    {
        cout<<"������������ͬʵ��:";
        cout<<"x1=x2="<<-b/(2*a)<<endl;
    }
    else if(delta>0)
    {
    delta=sqrt(delta);
    x1=(-b+delta)/(2*a);
    x2=(-b-delta)/(2*a);
    cout<<"������������ͬʵ��:";
    cout<<"x1="<<x1<<'\t'<<"x2="<<x2<<endl;
    }
    else                        //delta<0
      cout<<"������ʵ��!"<<endl;
    return 0;




}