#include <iostream>
#include <cmath>

int main(){
    double a,b,c;
    std::cout << " enter side A: ";
    std::cin >> a;
    std::cout << "enter side b: ";
    std::cin >> b;
    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a + b);
    std::cout << "side C: " << c ;
    
    return 0;
}