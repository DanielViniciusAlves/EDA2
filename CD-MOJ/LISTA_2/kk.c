#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define LESS_THAN(A, B)(A<B)
#define EXCHANGE(A, B){int temp=B; B=A; A=temp;}
#define COMPARE_AND_EXCHANGE(A, B){if(LESS_THAN(B, A)) EXCHANGE(A, B);}

//modified function name
int partition(int *arr, int left, int right){
    int pivot = arr[right];
    int i=left-1, j=right;
    for(;;){
        while(LESS_THAN(arr[++i], pivot));
        while(LESS_THAN(pivot, arr[--j])) if(i==j) break;
        if(i>=j) break;
        EXCHANGE(arr[i], arr[j])
    }
    EXCHANGE(arr[i], arr[right])
    return i;
}

//modified function name
void quick_sort(int *arr, int left, int right){
    if(left>=right) return;
    //move middle element to right
    COMPARE_AND_EXCHANGE(arr[(left+right)/2], arr[right])
        //move smallest element to left
        COMPARE_AND_EXCHANGE(arr[left], arr[(left+right)/2])
            //move largest element to right
            COMPARE_AND_EXCHANGE(arr[right], arr[(left+right)/2])
    int j = partition(arr, left, right); //modified function call
    quick_sort(arr, left, j-1);
    quick_sort(arr, j+1, right);
}


int quick_select(Item *arr, int left, int right, int n){
    int j = partition(arr, left, right);
    if (j>n)
       return quick_select(arr, left, j-1, n);
    else if (j<n)
       return quick_select(arr, j+1, right, n);
    return j;
}

int main(){
    int num;
    int start, end;
    int array_size, percentage, interval;
    //modified scanf to check the return value
    if (scanf("%d %d %d", &array_size, &percentage, &interval) == 3) {
        int right_bound = array_size-1;
        Item *arr = malloc(array_size*sizeof(Item));
        for(int i = 0; i < array_size; i++){
            scanf("%d", &arr[i]);
        }

        start = interval*percentage;
        end = start + interval;
        //ensure that end is not beyond the right bound
        if(end > right_bound){
          end = right_bound;
        }
        quick_select(arr, 0, right_bound, start);
        quick_select(arr, start+1, right_bound, end);
        quick_sort(arr, start, end);
        int i=start;
        //print the sorted subarray
        if(end == right_bound){
            while(i<=end){
                printf("%d\n", arr[i]);
                i++;
            }
        }
        else{
            while(i<end){
                printf("%d\n", arr[i]);
                i++;
            }
        }
    }
    return 0;
}
