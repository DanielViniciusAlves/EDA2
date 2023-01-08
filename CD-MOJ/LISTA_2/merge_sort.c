#include <stdio.h>

void merge(int array[], int left, int right, int middle){
    int l_length = middle - left +1;
    int r_length = right - middle;

    int temp_l[l_length];
    int temp_r[r_length];

    int j, i, k;

    for(int i=0; i<l_length; i++){
        temp_l[i]=array[left+i];
    }
    for(int i=0; i<r_length; i++){
        temp_r[i]=array[middle +  1 + i];
    }
    
    for(i=0, j=0, k=left; k<=right; k++){
        if((i<l_length) && (j>=r_length || temp_l[i]<=temp_r[j])){
            array[k]=temp_l[i];
            i++;
        } else{
            array[k]=temp_r[j];
            j++;
        }
    }

}

void merge_sort(int array[], int left, int right){
    if(left<right){
        int middle = left + (right - left) /2;

        merge_sort(array, left, middle);
        merge_sort(array, middle+1, right);

        merge(array, left, right, middle);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){
    // int arr[] = { 12, 11, 13, 5, 6, 7 };
    // int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    // printf("Given array is \n");
    // printArray(arr, arr_size);
 
    // merge_sort(arr, 0, arr_size - 1);
 
    // printf("\nSorted array is \n");
    // printArray(arr, arr_size);
    // return 0;
    int array_size = 0;
    int array[100000];
    int element;
    while (scanf(stdin, "%d", &element) != EOF) {
        array[array_size++] = element; // adiciona o elemento lido à array
    }
    merge_sort(array, 0, array_size - 1);
    // imprime a array lida
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}