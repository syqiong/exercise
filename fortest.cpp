#include <iostream>

using namespace std;

int main(){

    //for(��ʼֵ;�ж�;����)

    //
    for(int i=0;i<4;i++){
        cout << i <<endl;
    }

    int i;
    for(i = 0;i < 4;i++){

    }

    int j = 0;
    for(;j<4;j++){

    }

    j = 0;
    for(;;j++){
        // if(j<4) {
        //     continue;
        // }
        if(j>=4){
            break;
        }

        // ѭ������

    }

    // while(true){

    // }

    j = 0;
    for(;;){
        if(j >= 4) break;
        // ѭ������
        j++;
    }

    j = 0;
    for(;j<4;){
        // ѭ������
        j++;
    }

    for(int i = 0;;){
        if(i > 4) break;
        // ѭ������
        i++;
    }

    return 0;
}