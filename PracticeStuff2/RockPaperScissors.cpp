#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player, computer;
    player = getUserChoice();
    std::cout << "Your choice: " ;
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computers choice: " ;
    showChoice(computer);
    chooseWinner(player,computer);
    return 0;
}
char getUserChoice(){
    char player;
   
    do{
    std::cout << "Rock paper scissors game\n";
     std::cout << "choose one of the following\n";
    std::cout<<" 'r' for rock\n";
    std::cout<<" 'p' for paper\n";
    std::cout<<" 's' for scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = (rand() % 3) + 1;

    switch(num){
        case 1 :
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
        default:
            return 0;
    }
    
}
void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "rock\n";
            break;
        case 'p':
            std::cout << "paper\n";
            break;
        case 's':
            std::cout << "scissors\n";
            break;
        default :
            std::cout<< "invalid choice\n";
            break;
    }
}
void chooseWinner(char player, char computer){
    //i felt this was a neater solution to what they had demoed
    if(player == computer){
            std::cout << "Its a tie\n";
        }
    switch(player){
        case 'r':
            if(computer == 's'){
                std::cout<<"You win\n";
            }
            else if(computer == 'p'){
                std::cout<<"You lose\n";
            }
            break;
        case 's':
            if(computer == 'p'){
                std::cout<<"You win\n";
            }
            else if(computer == 'r'){
                std::cout<<"You lose\n";
            }
            break;
        case 'p':
         if(computer == 'r'){
                std::cout<<"You win\n";
            }
            else if(computer == 's'){
                std::cout<<"You lose\n";
            }
            break;
        default: std::cout<<"Error\n";
        break;
    }
}