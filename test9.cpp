#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op;
    cout<<"���������1���������������2:"<<endl;
    cin>>num1>>op>>num2;
    switch(op)
    {
        case'+':cout<<num1<<op<<num2<<"="<<num1+num2<<endl;break;
        case'-':cout<<num1<<op<<num2<<"="<<num1-num2<<endl;break;
        case'*':cout<<num1<<op<<num2<<"="<<num1*num2<<endl;break;
        case'/':cout<<num1<<op<<num2<<"="<<num1/num2<<endl;break;
        default:cout<<op<<"����Ч�����!";
    }
    return 0;
} 