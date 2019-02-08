#include <iostream>
using namespace std;
int main()
{
    double huas,shes;
    cout<<"输入一个华氏温度:";
    cin>>huas;
    shes=(huas-32)*5/9;
    cout<<"华氏温度是:"<<huas<<"转为摄氏温度是:"<<shes<<endl;
    return 0;

}