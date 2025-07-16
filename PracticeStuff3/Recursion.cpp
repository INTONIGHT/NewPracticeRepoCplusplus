#include <iostream>
using namespace std;

void walk(int steps);
void recursiveWalk(int steps);
int factorial(int num);
int recursiveFactorial(int num);
int main(){
    //recursion technique where a function invokes itself forom within
    //breaks complex concept into repeatable single steps
    //iterative vs recursive
    //advantages less code and cleaner
    //useful for sorting and searching
    //disadvaantages uses more memory and is slower
    // walk(5);
    // recursiveWalk(6);
    cout<< factorial(10) << "\n";
    cout<< factorial(15);
    return 0;
}
void walk(int steps){
    //iteratively
    for(int i =0;i<steps;i++){
        cout<<" You take a step!\n";
    }
}
void recursiveWalk(int steps){
    if(steps > 0){
        cout << "you take a recursive step!\n";
        recursiveWalk(steps - 1);
    }
}
int factorial(int num){
    int result = 1;
    for(int i =1;i<=num;i++){
        result = result * i;
    }
    return result;
}
int recursiveFactorial(int num){
    if(num > 1){
        return num * recursiveFactorial(num - 1);
    }else{
        return 1;
    }
}