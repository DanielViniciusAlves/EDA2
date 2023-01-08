#include <stdio.h>
# include<time.h>


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
    int n_products, n_pages, products_page;
    scanf("%d %d %d", &n_products, &n_pages, &products_page);
    int arr[n_products];
    for(int i=0; i<n_products; i++){
        scanf("%d", &arr[i]);
    }
    // clock_t begin = clock();

    quick_sort(arr, 0, n_products - 1);

    int x;
    x = products_page*n_pages;

    for (int i = x, j=0; i < n_products && j<products_page; i++, j++)
        printf("%d\n", arr[i]);

    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    // printf("%f\n", time_spent);
    return 0;

}
