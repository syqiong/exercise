#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int c,s,p,q;
    float w,d,f;
    cout<<"��������w�����s:"<<endl;
    cin>>w>>s;
    c=s/100;
    switch(c)
    {
        case 0: case 1:      {p=13;q=4;  break;}
        case 2: case 3: case 4:   {p=15;q=6;  break;}
        case 5: case 6: case 7: case 9:   {p=18;q=8;  break;}
        case 10: {p=20;q=10;   break;}
        default:{p=20;q=10;}
    }
    f=p+ceil(w-1)*q;          //ceil ��ʾ����ȡ��
    cout<<"���䵥�ۣ�"<<p<<'\t'<<"����:"<<w<<'\t'<<"���:"<<s<<endl;
    cout<<"�˷�:"<<f<<endl;
    return 0;
} 