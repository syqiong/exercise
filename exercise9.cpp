/*�����ٷ��Ƴɼ���Ҫ������ɼ��ȼ���,��,��,����,������90������Ϊ�ţ�80~89Ϊ����70~79Ϊ�У�60~69Ϊ����,60����Ϊ������.��ѡ��*/
#include <iostream>
using namespace std;
int main()
{
    double score;
    cin>>score;
    if(score<60)
    cout<<"������:"<<endl;
    else if(score<70)
    cout<<"����:"<<endl;
    if(score<80)
    cout<<"��:"<<endl;
    else if(score<90)
    cout<<"��:"<<endl;
    else
    cout<<"����:"<<endl;
 }