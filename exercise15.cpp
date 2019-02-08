/*输入两个正整数m和n，编程序求其最大公约数和最小公倍数*/
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int r;
    cin>>n>>m;
    int p=m,q=n;
    while(q!=0)
    {
        if(p%q!=0)
        {
            r=p%q;
            p=q;
            q=r;
        } 
  else      
         {                                                
            cout<<n<<","<<m<<"的最大公约数为:"<<q<<","<<"最小公倍数为 :"<<n*m/q;break;
         }
        } 
        return 0;                                                                                                                                       
}
