/*）某货物单价100元，若买100个及以上按九五折优惠，500个及以上按九折计算。输入购买个数，求总款数(结果保留两位有效数字),当输入购买个数为非法（小于0）时，给出提示信息。（选择）*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float price,discount,amount;
    int count;
    cout<<"输入购买件数:"<<endl;
    cin>>count;
    cout<<"输入单价:"<<endl;
    cin>>price;

    if(count<=0){
        cout<<"输入购买件数非法!"<<endl;
        return 0;
    }
    
    else if(count<100)
    discount=1;

    if (count>=100)
    discount=0.95;
    else if(count>=500) 
    discount=0.9;
    
    amount=price*discount*count;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<"总款为:"<<amount<<endl;
    return 0;
}