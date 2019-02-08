#include <iostream>

using namespace std;

int main()
{

    float score;
    cout << "请输入分数：" << endl;
    cin >> score;

    if (score < 60)
    {
        cout << "不及格" << endl;
    }
    else if (score < 80)
    {
        cout << "及格" << endl;
    }
    else if (score < 90)
    {
        cout << "良好" << endl;
    }
    else
    {
        cout << "优秀" << endl;
    }

    return 0;
}