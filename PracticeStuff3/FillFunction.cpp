#include <iostream>
int main(){
    //fill a range of elements with a specified value
    //fill(begin,end,value);
    const int size = 99;
    std::string foods[size] ;
    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3) * 2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "hotdog");
    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}