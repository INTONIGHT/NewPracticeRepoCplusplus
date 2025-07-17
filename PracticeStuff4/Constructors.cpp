#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    double gpa;
    //this is done in the background usually
    //here we are explicitly doing it
    Student(string name, int age,double gpa){
        //must be arrows
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){
    //special method thats called automatically when an object is instantiated
    //useful for assigning values to attributes as arguments
    Student student1("Spongebob",25,3.2);
    cout << student1.name << "\n";
    cout << student1.age << "\n";
    cout << student1.gpa << "\n";
    return 0;
}