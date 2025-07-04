#include <iostream>
int main(){
    //sizeof determines size of a variable data type class objects etc
    double gpa = 3.75;
    std::cout<< sizeof(gpa) << " bytes\n";
    std::string cars[] = {"corvette", " mustang", "camry"};
    //doesnt give length but just in bytes
    std::cout << sizeof(cars) << " bytes\n";
    char grades[] ={'A','B','C','D','F'};
    //divide mby individual element or the type to return the size of an array with number of elements
    std::cout << sizeof(grades)/sizeof(char) << " elements \n";
    //this will return number of strings helpful for arrays
    std::string students[] = {"Spongebob", "Patrick", " Squidward"};
      std::cout << sizeof(students)/sizeof(std::string) << " elements \n";
    return 0;
}