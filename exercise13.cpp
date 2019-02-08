/*13）输入年、月，输出该月的天数。（选择）*/
#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cout << "输入年份:";
    cin >> year;
    cout << "输入月:";
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
        cout << "该年份的:" << month << "有31天" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "该年份的:" << month << "有30天" << endl;
        break;
    case 2:
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            cout << "该年份的:" << month << "有29天" << endl;
        else
            cout << "该年份的:" << month << "有28天" << endl;
        break;
    }
    default:
        cout << "输入错误!";
    }
    return 0;
}