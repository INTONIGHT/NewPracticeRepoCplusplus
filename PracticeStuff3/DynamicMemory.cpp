#include <iostream>
using namespace std;
int main(){
    //dynamic memory allocated after compiled and running
    //use new operator to allocate on the heap rather than the stack 
    //useful when we dont know how much memory well need especially when accepting user input
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    cout << "address: " << pNum << "\n";
    cout << "value: " << *pNum << "\n";
    //freeing up the memory to avoid memory leaks
    delete pNum;
    char *pGrades = NULL;
    int size;
    cout<<" how many grades to enter in? : ";
    cin >> size;
    pGrades = new char[size];
    for(int i = 0; i <size;i++){
        cout << "Enter grade #"<< i +1<<":";
        cin >> pGrades[i];
    }
    for(int i = 0; i< size;i++){
        cout << pGrades[i] << " ";
    }
    //[] is needed for arrays.
   delete[] pGrades;

    return 0;
}