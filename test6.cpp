#include <iostream>
using namespace std;
int main()
{
    float price,discount,amount; //单价、折扣、总价
        int count;                 //购买件数
    cout << "输入单价:" << endl;
    cin >> price;
    cout << "输入购买件数:" << endl;
    cin >> count;
    if (count < 5)
        discount = 1;
    else if (count < 10)
        discount = 0.9;
    else
        discount = 0.8;
    amount = price * count * discount;
    cout << "单价:" << price << endl;
    cout << "购买件数:" << count << "\t\t"
         << "折扣:" << discount << endl, cout << "总价:" << amount << endl;
    return 0;
}