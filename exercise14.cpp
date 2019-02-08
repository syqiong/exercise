/*读入十个整数，统计其中能被3整除的数有几个。（循环）*/
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i,n=0;
    cout<<"请输入10个整数:";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    if (a[i]%3==0)n++; 
    cout<<"能被三整除的数的个数为:"<<n<<endl;
    return 0;
}