#include <math.h>
#include <stdio.h>


void insertionSort(int array[], int array_size){
    for(int i=0; i<=array_size; i++){
        
    }
}

int main(){
    int array[] = {19, 4, 5, 6, 20, 5, 3, 22};

    // This line is getting the size of the array. The idea behind is that the sizeof(array) will return the number of bytes in the array,
    // To transform this value to the size of the array only need to divide its value to the type of data that is being stored. In this case int, 
    // but could be char, float, etc.
    int array_size = sizeof(array)/sizeof(int);

    insertionSort(array, array_size);

    return 0;
}