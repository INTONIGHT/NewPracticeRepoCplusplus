#include <iostream>
#include <cmath>

int main() {
    double x = 3.14;
    double y = 4;
    double z ;
    //max min
    z = std::max(x,y);
    z = std::min(x,y);
    z = pow(2,3); // z would be 8
    z = sqrt(9);//3
    z = abs(-9);//9
    z = round(x); //rounds to 3
    z = ceil(x); //always rounds up
    z = floor(x); //always rounds down
    //more functions:  cplusplus.com/references/cmath
    std::cout << z;
    return 0;
}