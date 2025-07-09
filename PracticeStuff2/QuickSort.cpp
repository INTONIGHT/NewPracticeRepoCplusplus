#include <iostream>
using namespace std;
//function to swap elements
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int array[], int size){
    for(int i =0; i< size; i++){
        cout << array[i] << " ";
    }
    cout <<"\n";
}
//function to find the partiction
int partition(int array[], int low, int high){
    //select rightmost element as pivot
    int pivot = array[high];
    //pointer for greater element
    int i = (low - 1);
    //traverse elements and compare with pivot
    for(int j = low; j<high; j++){
        if(array[j] <= pivot){
            //if the element is smaller than pivot swap it with the greater element pointed by i
            i++;
            //swap element at i with element at j
            swap(&array[i],&array[j]);

        }
    }
    //swap piuvot with the greater elkement at i
    swap(&array[i+1], &array[high]);
    //return the partition point
    return (i + 1);
}
void quickSort(int array[], int low,int high){
    if(low < high){
        //find the pivot element such that 
        //elements lesser than pivot on the left
        //elements greater than pivot on the right
        int pi = partition(array, low,high);
        //recursive call on the left of the pivot
        quickSort(array, low,pi - 1);
        //recursive call on the right of the pivot
        quickSort(array,pi +1, high);
    }
}
int main(){
    int data[] = {8,7,6,1,0,9,2,10,15,25,19,64,52,89,91,52,25,12,56,37,82,18,31};
    int n = sizeof(data)/sizeof(int);
    cout <<"Unsorted array: \n";
    printArray(data,n);
    quickSort(data,0,n-1);
    cout<< "Array in ascending order: \n";
    printArray(data,n);
    return 0;
}