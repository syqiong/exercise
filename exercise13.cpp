/*13�������ꡢ�£�������µ���������ѡ��*/
#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cout << "�������:";
    cin >> year;
    cout << "������:";
    cin >> month;
    switch (month)
    {
    case 1 /* constant-expression */:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "����ݵ�:" << month << "��31��" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "����ݵ�:" << month << "��30��" << endl;
        break;
    case 2:
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            cout << "����ݵ�:" << month << "��29��" << endl;
        else
            cout << "����ݵ�:" << month << "��28��" << endl;
        break;
    }
    default:
        cout << "�������!";
    }
    return 0;
}