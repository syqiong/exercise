#include <iostream>
#define N 500
using namespace std;
int main()
{
    int i,n;
    int fib[N]={0,1,1};
    cin>>n;
    if(n<1)
    cout<<"error";
    else
    {
      for(i=3;i<=n;i++)
      fib[i]=fib[i-2]+fib[i-1] ;
      for(i=1;i<=n;i++)
      {
          cout<<fib[i]<<" ";
          if(i%4==0)
          cout<<endl;
      }
    }
    
    

}