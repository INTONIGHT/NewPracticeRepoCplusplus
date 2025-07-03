#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    double balance = 0;
    int choice = 0;
    do{
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        //resets any error flags when it getss wrong input
        std::cin.clear();
        //clears the input buffer
        fflush(stdin);
        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                //equivalent
                //balance = balance + deposit();
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout <<"Thanks for visiting\n";
                break;
            default:
                std::cout << "invalid choice\n";
                break;
        }
}while(choice != 4);
    return 0;
}

void showBalance(double balance){
    //using the iomanip to add some precision for floating points
    std::cout<<"Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
    double amt = 0;
    std::cout << "Enter amount to be deposited: " ;
    std::cin >> amt;
    if(amt > 0){
        return amt;
    } else {
        std::cout << " hats not a valid amount: \n";
        return 0;
    }
    
}
double withdraw(double balance){
    double amount = 0;
    std::cout << " Enter amount to be withdrawn: ";
    std::cin>> amount;
    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    if (amount > 0){
        return amount;
    }else{
         std::cout << " thats not a valid amount\n";
         return 0;
        }
    }
   