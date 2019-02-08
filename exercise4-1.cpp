#include <iostream>
using namespace std;
int main()
{
    char a, s;
    cout << "输入一个大写字母:";
    cin >> a;
    s = a + 32;
    cout << a << "对应的小写字母是:" << s << endl;
    return 0;
}