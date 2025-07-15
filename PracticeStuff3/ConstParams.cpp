#include <iostream>
using namespace std;
void printInfo(const string name, const int age);

int main(){
    //const parameter = parameter that is effectively read only
    //good for references pointers
    string name = "bro";
    int age = '21';
    return 0;
}
void printInfo(const string name, const int age){
    //now you cant do
    //name = "Test";
    cout << "name: " << name <<"\n";
    cout << "age" << age << "\n";
}