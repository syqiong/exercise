/*��������������m��n��������������Լ������С������*/
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
            cout<<n<<","<<m<<"�����Լ��Ϊ:"<<q<<","<<"��С������Ϊ :"<<n*m/q;break;
         }
        } 
        return 0;                                                                                                                                       
}
