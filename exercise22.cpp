/*±‡≥Ãº∆À„T=1£°+2£°+3!+°≠°≠+n£°°£(À´≤„—≠ª∑)*/
#include <iostream>
using namespace std;
int main()
{
    int n,h,s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k = 1;
        for(int j=1;j<=i;j++)
        {
            k = j*k;
        }
        cout << i<<"!="<<k<< endl;
        s += k;
    }
    cout<<s<<endl;
    return 0;
}