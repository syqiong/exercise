#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    double s,p,syuan;       //syuan��ʾԲ�����
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"syuan="<<s<<endl;
    return 0;
}