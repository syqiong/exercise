/*16）输入正整数n，输出斐波那契数列前n项的值。斐波那契数列（1，1，2，3，5，8，......）
注意：①当输入n值为小于1时，输出error(用数组实现)
      ②输出每个值一个空格分隔，每四个值占一行*/
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