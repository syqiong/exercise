/*21������ͼ�ε������ñ���n��ʾ�����n��ͼ�Σ�����������ʾ���� ����forѭ��
   ����������    5               
         ���    1
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