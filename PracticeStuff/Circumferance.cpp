# include <iostream>

namespace first {
    double radius = 11;
    double otherRadius = 56;
}

int main(){
    //can use using to use variables from that namespace then dont need to declare the variable
    using namespace first;
    const double PI = 3.1415;
    const int Light_speed = 299792458;
    double radius = 10;
    double circumerance = 2 * PI * radius;
    std::cout << circumerance << " cm\n";
    //how to call something from a diferent namespace
    std::cout << first::radius << " cm\n";
    std::cout << otherRadius << " cm\n";
    return 0;
}