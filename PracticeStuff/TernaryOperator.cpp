#include <iostream>
int main(){
    // ?: replace if else
    //condiition ? expression1 : expression 2;
    int grade = 75;
    grade >= 60 ? std::cout <<"you passed" : std::cout<<"you failed";
    //instead of if grade >= 60 and an else
    int number = 9;
    number % 2 == 1 ? std::cout<<"ODD" : std::cout<<"EVEN";
    return 0;
}