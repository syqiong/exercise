/*����ͬ�������뼦������ͷ���������Լ��ŵ������� �ֱ�������ĸ��������ӵĸ��������������ݲ�����ʱ��Ҫ����ʾ��Ϣ����ѭ����*/
#include <iostream>
using namespace std;
int main()
{
    int i,head, feet;
    cout << "�����뼦����ͷ������";
    cin >> head;
    cout << "�����뼦���ýŵ�����";
    cin >> feet;
    for (i == 0; i <= head; i++)
        {
            if (2 * i + (head - i) * 4 == feet)
            {
                cout << "��������Ϊ" << i <<"ֻ"<<'\n'<< "�õ�����Ϊ" << head-i <<"ֻ"<<'\n'<< endl;
            }
        }
    return 0;
}