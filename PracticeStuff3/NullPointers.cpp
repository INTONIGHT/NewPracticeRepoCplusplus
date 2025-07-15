#include <iostream>
using namespace std;

int main(){
    //null value pointer not pointing to anything
    //nullptr null pointer literalk
    //helpful for determining if an address was sucessfully created
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    //was my pointer assigned an address
    if(pointer == nullptr){
        cout << " address wasnt set\n";
        //dont try this:
        //cout<< *pointer;
    }else{
        cout <<"address was assigned\n";
        cout<< *pointer ;
    }
    return 0;
}