/*��������ı��ʽ�� ������1 �����op ������2 Ȼ�󣬼�����ʽ��ֵ��ָ���������Ϊ�ӣ�+��������-�����ˣ�*��������/*������һ���򵥵ļ���������Ҫ������û���/��
Ҫ�����Ҫ�л��У�  switch���ʵ�֣� ��������������Ϊ0����ѡ��)*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "���������1���������������2:" << endl;
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
            cout << "0������Ϊ����!";
        else

            cout << num1 << op << num2 << "=" << num1 / num2 << endl;
        break;
    }
    }
    return 0;
}