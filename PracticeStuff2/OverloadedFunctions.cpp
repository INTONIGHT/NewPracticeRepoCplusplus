#include <iostream>
//valid to have function with same name just needs different parameters
//function name and parameteres is called function signature
void bakePizza();
void bakePizza(std::string);

int main(){
    bakePizza();
    bakePizza("Pepporoni");
    return 0;
}

void bakePizza(){
    std::cout<<"Here is your pizza\n";
}
void bakePizza(std::string topping1){
    std::cout<<"Here is your " << topping1 << " pizza\n";
}