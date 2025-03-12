#include <iostream>
#include <vector>

//typedef is used for simplyifying a type within the code so you could use this instead of the full thing
typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text_t;
//typedef int number_t would work instead of just using int
//type def is not used as much
//you start with the name you want to name the alias and then what the alias will be for
using number_t = int;

int main(){
    //typeDef
    //instead of needing this:
    std::vector<std::pair<std::string,int>> pairlist;
    //you can do this
    pairlist_t pairlist2;
    //this will behave like a string
    text_t firstName = "Test";
    std::cout<< firstName;
    return 0;
}