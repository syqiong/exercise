#include <iostream>
using namespace std;
int main()
{
    int n, k = 1, s;
    cin >> n; // 5
    for (s = 1; s <= n; s++)
    {
        //k = s * k;
        k *= s;     
    }
    cout << k;
    return 0;
}