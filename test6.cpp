#include <iostream>
using namespace std;
int main()
{
    float price,discount,amount; //���ۡ��ۿۡ��ܼ�
        int count;                 //�������
    cout << "���뵥��:" << endl;
    cin >> price;
    cout << "���빺�����:" << endl;
    cin >> count;
    if (count < 5)
        discount = 1;
    else if (count < 10)
        discount = 0.9;
    else
        discount = 0.8;
    amount = price * count * discount;
    cout << "����:" << price << endl;
    cout << "�������:" << count << "\t\t"
         << "�ۿ�:" << discount << endl, cout << "�ܼ�:" << amount << endl;
    return 0;
}