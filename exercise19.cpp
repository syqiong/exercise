/*用一分、二分、五分的硬币构成一元的方法有几种,输出详细方案。（循环）*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c,s;
        for (a = 0; a <= 100; a++)
        for (b = 0; b <= 50; b++)
            for (c =0; c <= 20; c++)
                if (0.01 * a + 0.02 * b + 0.05 * c == 1)
                {
                    cout << "一分的为:" << a << "个"<<',';
                    cout << "二分的为:" << b << "个"<<',';
                    cout << "五分的为:"<< c << "个";
                    cout<<endl;
                }
    return 0;
}