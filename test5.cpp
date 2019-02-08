#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "输入3个整数:";
    cin >> a >> b >> c;
    cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << endl;
    if (a > b)
        if (a > c)
            max = a; //a>b且>c
        else
            max = c; //a>b且<c
    else if (b > c)
        max = b; //b>=a且<C
    else
        max = c; //b>=a且<C
    cout << "最大数为:max=" << max << endl;
    return 0;
}