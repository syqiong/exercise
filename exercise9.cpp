/*给出百分制成绩，要求输出成绩等级优,良,中,及格,不及格。90分以上为优，80~89为良，70~79为中，60~69为及格,60以下为不及格.（选择）*/
#include <iostream>
using namespace std;
int main()
{
    double score;
    cin>>score;
    if(score<60)
    cout<<"不及格:"<<endl;
    else if(score<70)
    cout<<"及格:"<<endl;
    if(score<80)
    cout<<"中:"<<endl;
    else if(score<90)
    cout<<"良:"<<endl;
    else
    cout<<"优秀:"<<endl;
 }