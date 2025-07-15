#include <iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main(){
    string cardNumber;
    int result = 0;
    cout<<"Enter a credit card #: " ;
    cin >> cardNumber;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    //378282246310005
    //can use that as an example
    //this second one can be used as an invalid one
    //3782822463100051
    if(result % 10 == 0){
        cout <<"That number is valid ";
    }else{
        cout << "That number is not valid";
    }
    return 0;
}
int getDigit(const int number){
    //18 mod 10 8  1% 10 is mod 8 +1 is 9
   return number % 10 + (number /10 % 10);
}
int sumOddDigits(const string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        sum += getDigit((cardNumber[i]- '0')* 2);
    }
    return sum;
    
}
int sumEvenDigits(const string cardNumber){
int sum = 0;
    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        sum += getDigit(cardNumber[i]- '0');
    }
    return sum;
}