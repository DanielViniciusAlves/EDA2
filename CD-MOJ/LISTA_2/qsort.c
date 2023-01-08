#include <stdio.h>
#include<stdlib.h>

int testing (const void * a, const void * b) {
   return ( (int)a - (int)b );
}

int main() {
    int n_products, n_pages, products_page;
    scanf("%d %d %d", &n_products, &n_pages, &products_page);
    int arr[n_products];
    for(int i=0; i<n_products; i++){
        scanf("%d", &arr[i]);
    }
    // clock_t begin = clock();

   qsort(arr, n_products, sizeof(int), testing);

    int x;
    x = products_page*n_pages;

    for (int i = 0, j=0; i < n_products; i++, j++)
        printf("- %d -\n", arr[i]);

    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    // printf("%f\n", time_spent);
    return 0;

}