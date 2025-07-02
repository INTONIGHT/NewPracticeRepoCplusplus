#include <iostream>
int main(){
    int number;
    //will execute at least once can be useful but risky.
    do{
        std::cout << "Enter as positive number";
        std::cin >> number;
    }while(number < 0);
    std::cout << "the number is : " << number;
    return 0;
}