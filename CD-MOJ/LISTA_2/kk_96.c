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

int main() {
    int n_products, n_pages, products_page;
    scanf("%d %d %d", &n_products, &n_pages, &products_page);
    int arr[n_products];
    for(int i=0; i<n_products; i++){
        scanf("%d", &arr[i]);
    }
    // clock_t begin = clock();

    merge_sort(arr, 0, n_products - 1);

    int x;
    x = products_page*n_pages;

    for (int i = x, j=0; i < n_products && j<products_page; i++, j++)
        printf("%d\n", arr[i]);

    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    // printf("%f\n", time_spent);
    return 0;

}
