#include <iostream>
int main(){
    //eases traversal over an iterable data set
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    //less flexible starts at beggining goes to the end
    //needs the type of element but its nice for dispalying elements and traversing them.
    for(std::string student : students){
        std::cout << student <<'\n';
    }
    int grades[] = {65,72,81,93};
    for(int grade : grades){
        std::cout << grade << "\n";
    }
    return 0;
}