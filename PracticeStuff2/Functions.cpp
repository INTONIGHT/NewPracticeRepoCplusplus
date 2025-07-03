#include <iostream>

//needs the type then the name for the variable
void happyBirthday(std::string name, int age){
    std::cout<<"Happy birthday to"<< name <<"\n";
    std::cout<<"Happy birthday to"<< name <<"\n";
   std::cout<<"Happy birthday dear"<< name <<"\n";
   std::cout<<"Happy birthday to"<< name <<"\n";
   std::cout<<"You are "<< age <<"years old\n";
}

int main(){
    //function block of reausable code
    //invokes the function can then pass variables
    //can call  it multiople times
    //if you dont declare a function before its calle dit errors out code is read top down
    //you can declare it beforehand then fill out what it does after
    std::string name = "bro";
    int age = 30;
    happyBirthday(name,age);
    return 0;
}
