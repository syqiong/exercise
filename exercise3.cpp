#include <iostream>
using namespace std;
int main()
{
    int intnumber,a,b,c;
    cout<<"����һ����λ������:"<<endl;
    cin>>intnumber;
    a=intnumber%10;
    b=intnumber/10%10;
    c=intnumber/100;
    cout<<"a="<<a<<"b="<<b<<"c="<<c<<"a+b+c="<<a+b+c<<endl;
    return 0;
}