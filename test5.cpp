#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "����3������:";
    cin >> a >> b >> c;
    cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << endl;
    if (a > b)
        if (a > c)
            max = a; //a>b��>c
        else
            max = c; //a>b��<c
    else if (b > c)
        max = b; //b>=a��<C
    else
        max = c; //b>=a��<C
    cout << "�����Ϊ:max=" << max << endl;
    return 0;
}