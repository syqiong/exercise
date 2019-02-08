#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "输入3个整数:";
    cin >> a >> b >> c;
    cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << endl;
    if (a > b)
        max = a;
    else
        max = b;
    cout << "最大数为:";
    if (c > max)
        cout << c << endl;
    else
        cout << max << endl;
    return 0;
}