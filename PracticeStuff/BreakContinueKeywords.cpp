#include <iostream>
int main(){
    for(int i =0; i<=20; i++){
        //break will stop the loop when it hits that condition
        //continue will skip that step of the program when it hits that condition
        if(i == 13){
            //break;
            continue;
        }
        std::cout << i << "\n";
    }
    return 0;
}