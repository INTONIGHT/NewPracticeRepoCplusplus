#include <iostream>
using namespace std;
int main(){
    //memory address can be accessed with &
    string name ="Bro";
    int age = 212;
    bool student = true;
    cout << "Names address: " << &name << "\n";
    cout << "age address: " << &age << "\n";
    cout << "student address: " << &student << "\n";
    return 0;
}