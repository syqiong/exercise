/*
��дһ�����򣬰�һ���ַ����е�Сд�ַ�ת���ɴ�д�ַ��������ַ����䡣(����)
*/
#include <iostream>
using namespace std;
int main()
{
    char a[20] = "123123HeLlOworld";
    for(int i=0;i<20;i++){
        //cout << a[i];
        if(a[i] >= 97 && a[i] <=122){
            a[i] -= 'a'-'A';
        }
    }
    cout<<a;
    return 0;
}