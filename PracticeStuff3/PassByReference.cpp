#include <iostream>
using namespace std;
void swap (string &x, string &y);

int main(){
    //pass byu value pass by reference
    string x = "Kool-aid";
    string y = "water";
    //when a variable is passed its passed by value you create copuies of the value. switching two copies but not original values
    //if you need to change the original you need to add the &
    swap(x,y);
    cout <<"x: " << x << "\n";
    cout <<"y: " << y << "\n";
    return 0;
}
//so if you dont provide this amperstand it just will pass the values but wont actually change anything need to pass the place in memory
//pass memory addresses where its located then swapping the values
//use pass byt reference as often as possible unless you have a reason to pass by value

void swap (string &x, string &y){
 string temp = "";
    temp = x;
    x= y;
    y=temp;
}