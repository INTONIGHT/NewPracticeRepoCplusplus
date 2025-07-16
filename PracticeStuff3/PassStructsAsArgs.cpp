#include <iostream>
using namespace std;

struct Car{
    string model;
    int year;
    string color;

};
void printCar(Car car);
void paintCar(Car &car, string color);
int main(){
    Car car1;
    Car car2;
    car1.model = "mustang";
    car1.year = 2023;
    car1.color = "blue";

    car2.model = "toyota";
    car2.year = 2023;
    car2.color = "red";
    paintCar(car1,"orange");
    printCar(car1);
    return 0;
}

void printCar(Car car){
    cout << car.model <<"\n";
    cout << car.year <<"\n";
    cout << car.color <<"\n";
}

void paintCar(Car &car, string color){
    car.color = color;
}