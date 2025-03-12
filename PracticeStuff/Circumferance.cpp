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
    //typedef alias for something
    //arithmetatic operators
    int students = 20;
    students += 1;
    students ++; 
    students *=2;
    //if you divide by 3 it will truncate the variable
    students /=2;
    int remainder = students % 3;
    std::cout << remainder << "\n";
    //type conversion
    //implicit and then explicit
    int dummy = 3.14;
    std:: cout << dummy << "\n";
    //this will explicitly cast it
    std::cout << (char) 100 << "\n";
    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;
    //need to    double score = correct/(double)questions * 100; to get the real answer
    std::cout << score;
    return 0;
}