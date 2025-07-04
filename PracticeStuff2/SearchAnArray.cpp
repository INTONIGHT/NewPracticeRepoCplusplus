#include <iostream>

int searchArray(int numbers[], int size, int searchValue);
int searchFoodArray(std::string foods[], int size, std::string searchValue);
int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int myNum;
    std::cout<< "Enter element to search for: \n";
    std::cin >> myNum;
    index = searchArray(numbers,size,myNum);
    if(index != -1){
        std::cout<< myNum << " is at index: " << index;
    }else{
        std::cout << myNum << " is not in the array";
    } 
    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    std::cout << "Type the food youd like to look for \n";
    std::string myFood;
    std::getline(std::cin, myFood);
    int foodSize = sizeof(foods)/sizeof(std::string);
    int foodIndex;
    foodIndex = searchFoodArray(foods,foodSize,myFood);
    
    return 0;
}

int searchArray(int numbers[], int size, int searchValue){
    //linear search
    for(int i =0;i<size; i++){
        if(numbers[i] == searchValue){
            return i;
        }
    }
    return -1;
     
}
int searchFoodArray(std::string foods[],int size, std::string searchValue){
     for(int i =0;i<size; i++){
        if(foods[i] == searchValue){
            return i;
        }
    }
    return -1;
}