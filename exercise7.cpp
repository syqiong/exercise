/*��������������������ֵ�Լ����ֵ�����˳�����֡���ѡ��*/
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        if (a > c)
            cout << "�����Ϊ:" << a << "������ǵ�:" << 1 << "��";
        else
            cout << "�����Ϊ:" << a << "������ǵ�:" << 3 << "��";
    if (b > c)
        cout << "�����Ϊ:" << a << "������ǵ�:" << 2 << "��";
    else
        cout << "�����Ϊ:" << a << "������ǵ�:" << 3 << "��";
    return 0;
}