/*
����һ����λ��n����100~n֮�������ˮ�ɻ�������ѭ����
    ˮ�ɻ����� ��λ����ʮλ�����λ��������֮ �͵������������
Ҫ����������У�ÿһ����֮����һ���ո�ָ�;���벻����λ�������error��
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "������һ����λ��"<<endl;
    cin >> n;
    if(n < 100 ||  n >= 1000){
        cout << "error";
        return 0;
    }
    for(int i = 100; i <= n; i++){
        int a = i/100;
        int b = i/10%10;
        int c = i%10;
        int sum = a*a*a + b*b*b + c*c*c;
        if(sum == i){
            cout << i << "   ";
        }
    }
     return 0;
}