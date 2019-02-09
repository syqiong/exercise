/*
输入30名学生某门功课的成绩，统计100分，90~99分，80~89分，70~79分，60~69分以及不及格的人数。(数组)
*/

#include <iostream>
using namespace std;
int main()
{
    int score[10];
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    cout << "请输入成绩:";
    for (int i = 0; i < 10; i++)
    {
        cin >> score[i];
        if (score[i] < 60)
        {
            a++;
        }
        else if (score[i] < 70)
        {
            b++;
        }
        else if (score[i] < 80)
        {
            c++;
        }
        else if (score[i] < 90)
        {
            d++;
        }
        else if (score[i] < 100)
        {
            e++;
        }
        else
        {
            f++;
        }
    }
    cout << "不及格:" << a << endl;
    cout << "60~69:" << b << endl;
    cout << "70~79:" << c << endl;
    cout << "80~89:" << d << endl;
    cout << "90~99:" << e << endl;
    cout << "100:" << f << endl;
    return 0;
}