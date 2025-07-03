#include <iostream>
void printNum();
int globalNum = 3;
int myNum = 4;
//you want to avoid global as it can crowd space but still is useful
int main(){
    //local variables =anything declared inside a function or block{}
    //global are declared outside completely
    int myNum = 1;
    std::cout << "mynum:" << myNum << "\n";
    std::cout << "global num: " << globalNum << "\n";
    //if you want to use the global mynum 
    std::cout << ::myNum << "\n";
    return 0;
}

void printNum(){
    //it wouldnt see the mynum in this case
    //if you add this line 
    int myNum = 2;
    //that works
    std::cout << myNum;
}