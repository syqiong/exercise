/*��ĳ���ﵥ��100Ԫ������100�������ϰ��������Żݣ�500�������ϰ����ۼ��㡣���빺����������ܿ���(���������λ��Ч����),�����빺�����Ϊ�Ƿ���С��0��ʱ��������ʾ��Ϣ����ѡ��*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float price, discount, amount;
    int count;
    cout << "���빺�����:" << endl;
    cin >> count;
    cout << "���뵥��:" << endl;
    cin >> price;

    if (count <= 0)
        cout << "���빺������Ƿ�!" << endl;
    else
    {
        if (count < 100) // count > 0 && count < 100
            discount = 1;
        else if (count < 500) // count >= 100 && count < 500
            discount = 0.95;
        else                   // count >= 500 
            discount = 0.9;

        amount = price * discount * count;
        cout << setiosflags(ios::fixed) << setprecision(2) << "�ܿ�Ϊ:" << amount << endl;
    }
   


    // if(count <= 0){
    //     cout << "�Ƿ�";
    //     return 0;
    // }

    // if(count > 0 && count < 100){
    //     discount = 1;
    // }

    // if(count >= 100 && count < 500){
    //     discount = 0.95;
    // }

    // if(count >= 500){
    //     discount = 0.9;
    // }

    return 0;

}