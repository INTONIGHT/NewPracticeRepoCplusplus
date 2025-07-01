#include <iostream>
int main(){
    //&& check if two conditions are true || check if one condition is true ! reverse logical state
    int temp ;
    std::cout <<"Enter the temperature"
    std::cin>> temp;
    //if temp is greater than 0 and less than 30
    if(temp > 0 && temp < 30){
        std::cout<<"its cold today";
    }
    return 0;
}