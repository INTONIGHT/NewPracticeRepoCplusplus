#include <iostream>
//function declaration needed for it to pick it up
double calcSquare(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);
int main(){
    double length = 5.0;
    double area = calcSquare(length);
    double volume = cube(length);
    std::cout << "Area: " << area << " cm^2\n" << " volume: " << volume << " cm^3\n";

    std::string firstname = "test";
    std::string lastname = "user";
    std::string fullname = concatStrings(firstname, lastname);
    std::cout << fullname << " is the full name";
    return 0;
}

double calcSquare(double length){
    //can always just return length * length;
    double result = length * length;
    return result;
}
double cube(double length){
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}