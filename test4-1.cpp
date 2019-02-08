#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "输入3个整数:";
    cin >> a >> b >> c;
    cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << endl;
    if (a > b&&b>c)
        max = a;
    else if(b>a&&b>c)
        max = b;
        else max=c;
    cout << "最大数为:max="<<max<<endl;
    return 0;
}