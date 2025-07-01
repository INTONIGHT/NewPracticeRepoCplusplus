#include <iostream>
int main(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);
   
    //returns length of a string
    if(name.length() > 12){
        std::cout<< " Your name cant be over 12 characters its current length is: " << name.length() << " characters";
    }
    //returns a boolean depending on if the string is empty
   if(name.empty()){
    std::cout<< " you didnt enter your name";
   }
   //this will clear the string
   //name.clear();

   //appends something to the end of a string
   name.append("@test.com");
   std::cout<<"Your username is : " <<name <<" \n";
   //returns character at a position
   std::cout << name.at(0) << "\n";
    //inserts a string at the indicated position
   name.insert(0, "@");
   //searches a string for something in this case whitespace
   std::cout << name.find(' ');
   //erases a portion of a string in this case the first 3 characters
   //name.erase(0,3)
   //string class has a list of more methods
    return 0;
}