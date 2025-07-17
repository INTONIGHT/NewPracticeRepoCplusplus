#include <iostream>
using namespace std;
class Animal{
    public:
        bool alive= true;
        void eat(){
            cout << "This animal is eating\n";
        }
};
//need the : and the public
class Dog : public Animal {

};
int main(){
    //a class can recieve attributes and methods from another class
    Dog dog1;
    cout << dog1.alive <<"\n";
    dog1.eat();
    return 0;
}