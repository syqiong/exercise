/*��һ�֡����֡���ֵ�Ӳ�ҹ���һԪ�ķ����м���,�����ϸ��������ѭ����*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c,s;
        for (a = 0; a <= 100; a++)
        for (b = 0; b <= 50; b++)
            for (c =0; c <= 20; c++)
                if (0.01 * a + 0.02 * b + 0.05 * c == 1)
                {
                    cout << "һ�ֵ�Ϊ:" << a << "��"<<',';
                    cout << "���ֵ�Ϊ:" << b << "��"<<',';
                    cout << "��ֵ�Ϊ:"<< c << "��";
                    cout<<endl;
                }
    return 0;
}