#include <stdio.h>


void quick_sort(int array[], int first, int last){
    if(first < last){
        int pivot = array[first];
        int i = first+1;
        int j = last;

        while(i<=j){
            while(array[i] <= pivot && i <= j){
                i++;
            }
            while(array[j] > pivot && j >= i){
                j--;
            }
            if(i<j){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        if(j != first){
            int temp = array[j];
            array[j] = array[first];
            array[first] = temp;

            // 

        }

        quick_sort(array, first, j-1);
        quick_sort(array, j+1, last);
    }
}       

int main() {
    int arr[] = {6, 3, 2, 10, 4, 6, 11, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;

}
