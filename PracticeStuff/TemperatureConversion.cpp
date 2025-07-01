#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout<<"**** temperature conversion\n";
    std::cout<<" F = Farenheit\n C = Celsiuus \n What unit would you like to convert to?";
    std::cin >> unit;
    if(unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature  in celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout<< "temperature is : " <<temp << "F\n";
    }else if(unit =='C' || unit == 'c'){
        std::cout<<"Enter the temperature  in Farenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout<< "temperature is : " <<temp << "C\n";
    } else{
        std::cout<<"Please enter in only C or F\n";
    }

    return 0;
}