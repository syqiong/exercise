#include <iostream>
#define pi 3.1415
using namespace std;
int main()
{
    double r,cyuan,syuan;       //r表示圆的半径，cyuan表示圆的周长，syuan表示圆的面积
     cin>>r;
     cyuan=2*pi*r;
     syuan=pi*r*r;
     cout<<"cyuan="<<cyuan<<"syuan="<<syuan<<endl;
     return 0;


}