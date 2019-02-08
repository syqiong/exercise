/*鸡兔同笼，输入鸡和兔子头的总数，以及脚的总数； 分别输出鸡的个数和兔子的个数，当输入数据不合理时，要有提示信息。（循环）*/
#include <iostream>
using namespace std;
int main()
{
    int i,head, feet;
    cout << "请输入鸡和兔头的总数";
    cin >> head;
    cout << "请输入鸡和兔脚的总数";
    cin >> feet;
    for (i == 0; i <= head; i++)
        {
            if (2 * i + (head - i) * 4 == feet)
            {
                cout << "鸡的数量为" << i <<"只"<<'\n'<< "兔的数量为" << head-i <<"只"<<'\n'<< endl;
            }
        }
    return 0;
}