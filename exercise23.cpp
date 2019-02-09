/*
输入一个三位数n，求100~n之间的所有水仙花数。（循环）
    水仙花数： 个位数、十位数与百位数的立方之 和等于这个数本身。
要求：输出不换行，每一个数之间用一个空格分隔;输入不是三位数，输出error。
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "请输入一个三位数"<<endl;
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