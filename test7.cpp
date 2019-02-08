#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    float delta,x1,x2;
    const float zero=0.0001;        //定一个很小的常数
    cout<<"输入3个系数a(a!=0),b,c:"<<endl;
    cin>>a>>b>>c;
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<endl;
    delta=b*b-4*a*c;
    if(fabs(delta)<zero)     //绝对值很小的数即被认为是0      
    {
        cout<<"方程有两个相同实根:";
        cout<<"x1=x2="<<-b/(2*a)<<endl;
    }
    else if(delta>0)
    {
    delta=sqrt(delta);
    x1=(-b+delta)/(2*a);
    x2=(-b-delta)/(2*a);
    cout<<"方程有两个不同实根:";
    cout<<"x1="<<x1<<'\t'<<"x2="<<x2<<endl;
    }
    else                        //delta<0
      cout<<"方程无实根!"<<endl;
    return 0;




}