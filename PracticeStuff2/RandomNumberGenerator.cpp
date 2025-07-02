#include <iostream>
#include <ctime>
int main(){
    //pseudo random
    //initialize random generator uses a seed and time is commonly used as a seed
    srand(time(NULL));
    //can use % to give yourself a range
    //this could simulate rolling a 20 sided dice by using modulus here
    //can add more calls with the rand
    int num = (rand() % 20) + 1;
    std::cout << num;
    return 0;
}