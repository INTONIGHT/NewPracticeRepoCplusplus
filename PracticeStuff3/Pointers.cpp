#include <iostream>
using namespace std;
int main(){
    //pointer variable that stores a memory adddress for another variable
    //& address of operator
    //* dereference operator
    string name = "Test";
    int age = 21;
    //how to create a popinter
    string *pName = &name;
    cout << pName << "\n";
    //to access it you need to do this:
    //dereference access the value
    cout << *pName << "\n";
    int *pAge = &age;
    cout << pAge << "\n";
    cout << *pAge << "\n";
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    //this wouldnt work as freepizzas is already an address
    //string *pFreePizzas = &freePizzas;
    //needs to be fthis:
    string *pFreePizzas = freePizzas;
    cout << pFreePizzas << "\n";
    //returns first element
     cout << *pFreePizzas << "\n";
    return 0;
}