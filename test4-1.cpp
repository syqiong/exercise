#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "����3������:";
    cin >> a >> b >> c;
    cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << endl;
    if (a > b&&b>c)
        max = a;
    else if(b>a&&b>c)
        max = b;
        else max=c;
    cout << "�����Ϊ:max="<<max<<endl;
    return 0;
}