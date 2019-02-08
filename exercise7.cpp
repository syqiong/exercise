/*输入三个整数，输出最大值以及最大值输入的顺序数字。（选择）*/
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        if (a > c)
            cout << "最大数为:" << a << "最大数是第:" << 1 << "个";
        else
            cout << "最大数为:" << a << "最大数是第:" << 3 << "个";
    if (b > c)
        cout << "最大数为:" << a << "最大数是第:" << 2 << "个";
    else
        cout << "最大数为:" << a << "最大数是第:" << 3 << "个";
    return 0;
}