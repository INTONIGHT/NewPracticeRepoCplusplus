#include <iostream>
#include <ctime>

int main(){
    int num;
    int guess;
    //if not initaiated to 0 it does some weird stuff not sure why yet
    
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1 ;
    do{
        std::cout << "Enter a guess between (1 - 100): ";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Too high \n";
        } else if(guess < num){
            std::cout<< "Too low \n";
        } else {
            std::cout << "Correct # of tries: " << tries << '\n';
        }
    }while(guess != num);

    return 0;
}