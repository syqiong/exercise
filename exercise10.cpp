/*输入年份（正整数），判断这一年是否为闰年。 （选择）*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"输入年份:";
    cin>>year;
    if(year%4==0&&year%100!=0||year%400==0)
    cout<<year<<"是闰年"<<endl;
    else
    cout<<year<<"不是闰年"<<endl;
    return 0;
    


}