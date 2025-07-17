#include <iostream>
using namespace std;

class Human{
    //access modifier
    public:
    //can add defaultr values then override them
        string name;
        int age;
        string job;
        void eat(){
            cout << "This person is eating\n";
        }

};
class Car{
    public:
    string make =  "test";
    string model = "dummy";
    int year = 1971;
    string color = "black";
};
int main(){
    //object collection of attributes and methods created with classes
    Human human1;
    human1.name = "Rick";
    human1.job = "scientist";
    human1.age =70;
    cout << human1.name << "\n";
    cout << human1.job << "\n";
    cout << human1.age << "\n";
    human1.eat();
    Car car1;
    cout << car1.make << "\n";
    cout << car1.model << "\n";
    cout << car1.year << "\n";
    cout << car1.color << "\n";
    Car car2;
    car2.model = "Toyota";
    cout << car2.model << "\n";
    cout << car2.make << "\n";
    return 0;
}