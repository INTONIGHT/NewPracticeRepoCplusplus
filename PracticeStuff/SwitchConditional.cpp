#include <iostream>

int main(){
    //you could do  a nested if else but its not ideal
    int month;
    std::cout << "Enter the month(1-12)";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout <<"It is January";
            break;
        case 2:
            std::cout<<"February";
            break;
        default: 
            std::cout<<"Im lazy";
            break;
    }
    return 0;
}