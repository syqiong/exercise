/*�����/4��ֱ�����һ��1/(4n-3) - 1/(4n-1)��ֵС��10-7����ѭ����*/
#include <iostream>
using namespace std;
int main()
{
    double s;
    int n;
    float k;
    s = 0;
    for (n = 1; ; n++)
    {
        k = 1.0 / (4 * n - 3) - 1.0 / (4 * n - 1);
        s = s + k;
        if (k < 10e-7)
            break;  
    }
    cout <<"s="<< s << endl;
    //cout <<"��="<< s * 4 << endl;
    return 0;
}