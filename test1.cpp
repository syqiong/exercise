#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double s, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "area=" << s << endl;
    return 0;
}