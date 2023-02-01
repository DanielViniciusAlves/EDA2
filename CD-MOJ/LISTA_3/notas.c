#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_counts[1000001];
void update_hash(int key, int *max_val, int *max_col){
    hash_counts[key]++;
    if(hash_counts[key]>*max_val){
        *max_val=hash_counts[key];
        *max_col=key;
    } else if(hash_counts[key]==*max_val){
        if(key>*max_col){
            *max_col=key;
        }
    }
}

int main(void){
    int num_inputs, input;
    int max_count=0;
    int max_color=0;
    memset(hash_counts, 0, 101*sizeof(int));
    scanf("%d", &num_inputs);
    for(int i=0; i < num_inputs; i++){
        int color;
        scanf("%d", &color);
        update_hash(color, &max_count, &max_color);
    }
    printf("%d\n", max_color);
}
