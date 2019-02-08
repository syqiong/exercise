#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    a = (a % 10) * 100 + a % 100 / 10 * 10 + a / 100;
    cout << a;
    return 0;
}