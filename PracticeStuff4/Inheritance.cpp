#include <iostream>
using namespace std;
class Animal{
    public:
        bool alive= true;
        void eat(){
            cout << "This animal is eating\n";
        }
};
//need the : and the public
class Dog : public Animal {
    public:
        void bark(){
            cout << "The dog goes woof\n";
        }
};
class Cat : public Animal {
    public:
        void meow(){
            cout << "The cat meows\n";
        }
};
class Shape {
    public:
        double area;
        double volume;
};
class Cube: public Shape {
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }
};
class Sphere: public Shape {
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.14159 * (radius * radius);
            this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
        }
};
int main(){
    //a class can recieve attributes and methods from another class
    Dog dog1;
    cout << dog1.alive <<"\n";
    dog1.eat();
    dog1.bark();
    Cat cat1;
     cout << cat1.alive <<"\n";
    cat1.eat();
    //cant do this one
    //cat1.bark();
    cat1.meow();
    Cube cube(10);
    cout << "Cube surface area: " << cube.area <<"cm^2\n";
     cout << "Cube volume: " << cube.volume <<"cm^3\n";
     Sphere sphere(5);
     cout << "sphere surface area: " << sphere.area <<"cm^2\n";
     cout << "sphere volume: " << sphere.volume <<"cm^3\n";
    return 0;
}