#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op;
    cout<<"输入操作数1，运算符，操作数2:"<<endl;
    cin>>num1>>op>>num2;
    switch(op)
    {
        case'+':cout<<num1<<op<<num2<<"="<<num1+num2<<endl;break;
        case'-':cout<<num1<<op<<num2<<"="<<num1-num2<<endl;break;
        case'*':cout<<num1<<op<<num2<<"="<<num1*num2<<endl;break;
        case'/':cout<<num1<<op<<num2<<"="<<num1/num2<<endl;break;
        default:cout<<op<<"是无效运算符!";
    }
    return 0;
} 