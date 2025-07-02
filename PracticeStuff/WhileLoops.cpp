#include <iostream>
int main(){
    std::string name;
    //while this condition is true until it stops
    while(name.empty()){
        std::cout<< "Enter your name";
        std::getline(std::cin,name);
    }
    //dont do tthis:
    //while(1 ==1)
    std::cout << "hello: " << name;
    return 0;
}