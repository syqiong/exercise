#include <iostream>

using namespace std;

int main()
{

    float score;
    cout << "�����������" << endl;
    cin >> score;

    if (score < 60)
    {
        cout << "������" << endl;
    }
    else if (score < 80)
    {
        cout << "����" << endl;
    }
    else if (score < 90)
    {
        cout << "����" << endl;
    }
    else
    {
        cout << "����" << endl;
    }

    return 0;
}