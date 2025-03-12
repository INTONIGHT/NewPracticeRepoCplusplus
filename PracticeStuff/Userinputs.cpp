#include <iostream>
#include <string>
using namespace std;

int main(){
    std:: string name;
    int age;
    std::cout << "Whats your name?: ";
    //the std ws eliminates any whitespaces before the characters
    std::getline(std::cin >> std::ws, name);
    std::cout << "whats your age: ";
    std ::cin >> age;
    std::cout << "hello: " << name << " you are: " << age;
    return 0;
}