/*������ݣ������������ж���һ���Ƿ�Ϊ���ꡣ ��ѡ��*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"�������:";
    cin>>year;
    if(year%4==0&&year%100!=0||year%400==0)
    cout<<year<<"������"<<endl;
    else
    cout<<year<<"��������"<<endl;
    return 0;
    


}