/*
����30��ѧ��ĳ�Ź��εĳɼ���ͳ��100�֣�90~99�֣�80~89�֣�70~79�֣�60~69���Լ��������������(����)
*/

#include <iostream>
using namespace std;
int main()
{
    int score[10];
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    cout << "������ɼ�:";
    for (int i = 0; i < 10; i++)
    {
        cin >> score[i];
        if (score[i] < 60)
        {
            a++;
        }
        else if (score[i] < 70)
        {
            b++;
        }
        else if (score[i] < 80)
        {
            c++;
        }
        else if (score[i] < 90)
        {
            d++;
        }
        else if (score[i] < 100)
        {
            e++;
        }
        else
        {
            f++;
        }
    }
    cout << "������:" << a << endl;
    cout << "60~69:" << b << endl;
    cout << "70~79:" << c << endl;
    cout << "80~89:" << d << endl;
    cout << "90~99:" << e << endl;
    cout << "100:" << f << endl;
    return 0;
}