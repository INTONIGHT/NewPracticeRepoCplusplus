#include <iostream>

void bubbleSort(int nums[], int size);

int main(){
    int nums[] = { 7, 24,1,9,51,25,78,9,12,5,4};
    int size = sizeof(nums)/sizeof(int);
    bubbleSort(nums,size);
    for(int element : nums){
        std::cout << element << " ";
    }
    return 0;
}
void bubbleSort(int nums[], int size) {
    int temp;
    for(int i =0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            
            if(nums[j] > nums[j +1]){
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1 ] = temp;
            }
        }
    }
}