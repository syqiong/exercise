#include <iostream>

using namespace std;

int main(){

    //for(初始值;判断;步增)

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

        // 循环操作

    }

    // while(true){

    // }

    j = 0;
    for(;;){
        if(j >= 4) break;
        // 循环操作
        j++;
    }

    j = 0;
    for(;j<4;){
        // 循环操作
        j++;
    }

    for(int i = 0;;){
        if(i > 4) break;
        // 循环操作
        i++;
    }

    return 0;
}