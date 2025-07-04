#include <iostream>
int main(){
    //arrays data structure that holds multiple values
    //values are accessed with an index number;
    std::string cars[] = {"corvette", " mustang", "camry"};
    //must be same data type
    //this will display the memory address
    std::cout <<cars << "\n";
    //will return corvette
    std::cout <<cars[0];
    cars[3] = "Lambo";
    //if its an empty one youy have to do it like this
    double prices[3];
    prices[0] = 5.00;
    
    return 0;
}