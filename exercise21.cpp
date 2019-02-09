/*21）输入图形的行数用变量n表示，输出n行图形，如样例。提示：① 两层for循环
   样例：输入    5               
         输出    1
                12
               123
              1234
             12345*/
#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int k=0;k<n-i;k++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<j;
        cout<<endl;
    }
    return 0;
}