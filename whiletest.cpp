#include <iostream>

using namespace std;

int main(){

    // while(判断条件){
    //     循环体
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
        // 循环操作
    }

    i = 0;
    while(true){
        if(i>=4) break;

        i++;
    }

    i = 0;
    while(true){
        if(i++>=4) break;
        // 循环操作
    }

}