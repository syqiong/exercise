#include <iostream>

using namespace std;

int main(){

    // while(�ж�����){
    //     ѭ����
    // }

    // while(true){

    // }

    int i = 0;
    while(i < 4){
        cout << i << endl;
        i++;
    }

    i = 0;
    while(i < 4){
        cout << i++ << endl;
        // ѭ������
    }

    i = 0;
    while(true){
        if(i>=4) break;

        i++;
    }

    i = 0;
    while(true){
        if(i++>=4) break;
        // ѭ������
    }

}