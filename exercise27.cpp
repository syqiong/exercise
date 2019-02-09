/*
编写程序，从任意n个数中找出最大的数和最小的数并将它们互换。
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int a[1000];

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout<< endl;

    int max = a[0],min = a[0],j=0,k=0;
    for(int i=1;i<n;i++){
        if(a[i] > max){
            max = a[i];
            j = i;
        }
        if(a[i] < min){
            min = a[i];
            k = i;
        }
    }

    a[j] = min;
    a[k] = max;

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}