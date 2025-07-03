#include <iostream>
#include <ctime>

int main(){
    //uses current time as a seed
    srand(time(0));
    //modulus for range
    int randNum = (rand() % 5) + 1;
    switch (randNum)
    {
    case 1:
        std::cout<<"You win a bumper sticker \n";
        break;
    case 2:
        std::cout<<"You win a tshirt \n";
        break;
    case 3:
        std::cout<<"You win a free lunch \n";
        break;
    case 4:
        std::cout<<"You win concert tickets \n";
        break;
    case 5:
         std::cout<<"You win a gift card \n";
        break;
    default:
        break;
    }
    return 0;
}