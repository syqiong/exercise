#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "������ݣ�" << endl;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << year << "������" << endl;
    else
        cout << year << "��������190" << endl;
    return 0;
}