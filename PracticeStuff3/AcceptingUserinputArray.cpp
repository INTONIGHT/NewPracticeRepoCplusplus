#include <iostream>
int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(std::string);
    std::string temp;
    for(int i = 0; i<size;i++){
        std::cout<< "Enter a food you like or 'q' to quit#"<< i+1 << ":";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        } else{
            foods[i] = temp;
        }
    }
    std::cout <<"you like the following foods:\n";
    //using empty to make sure its not empty and then go until its empty or the end
    for(int i = 0; !foods[i].empty();i++){
        std::cout << foods[i] <<"\n";
    }
    return 0;
}