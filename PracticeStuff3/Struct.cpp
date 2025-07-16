#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;

};

int main(){
    //struct structure that groups related variable under one name
    student student1;
    student1.name = "Test";
    student1.gpa = 4.2;
    student1.enrolled = true;
    cout <<  student1.name << '\n';
    cout <<  student1.gpa << '\n';
    cout <<  student1.enrolled << '\n';
    return 0;
}