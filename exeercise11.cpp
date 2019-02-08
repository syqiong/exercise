/*键盘输入的表达式： 操作数1 运算符op 操作数2 然后，计算表达式的值，指定的运算符为加（+）、减（-）、乘（*）、除（/*编程设计一个简单的计算器程序，要求根据用户从/）
要求：输出要有换行；  switch语句实现； 相除运算除数不能为0；（选择)*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "输入操作数1，运算符，操作数2:" << endl;
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << op << num2 << "="<<'\n' << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << op << num2 << "="<<'\n' << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << op << num2 << "=" <<'\n'<< num1 * num2 << endl;
        break;
    case '/':
    {
        if (num2 == 0)
            cout << "0不能作为除数!";
        else

            cout << num1 << op << num2 << "=" << num1 / num2 << endl;
        break;
    }
    }
    return 0;
}