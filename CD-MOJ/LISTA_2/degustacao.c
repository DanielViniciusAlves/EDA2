#include <stdio.h>
#include <stdlib.h>

struct wine{
    int I;
    char C;
    int P;
}typedef wine;


void merge(wine vetor[], int l, int m, int r){
    wine *temp = malloc(sizeof(wine)*(r-l+1));
    int k=0, i=l, j=m+1;

    while(i<=m && j<=r){
        if(vetor[i].I>=vetor[j].I){
            temp[k++]=vetor[i++];
        }
        else{
            temp[k++]=vetor[j++];
        }
    }
    while(i<=m){
        temp[k++]=vetor[i++];
    }
    while(j<=r){
        temp[k++]=vetor[j++];
    }
    k=0;
    for(int i=l;i<=r;i++){
        vetor[i]=temp[k++];
    }
    free(temp);
}

void merge_sort(wine vetor[], int l, int r){
    if(l>=r) return;
    int m = (l+r)/2;
    merge_sort(vetor, l, m);
    merge_sort(vetor, m+1, r);
    merge(vetor, l, m, r);
}


int main(){
    char input[100001];
    int i=0, k=0;
    wine array[100000];
    scanf(" %s", &input[i]);
    while(input[i]!='\0'){
        char c = input[i];
        array[k].C= input[i];
        array[k].P= i;
        int counter=1;
        int p=i;
        while(input[i+1]==c){
            counter++; 
            i++;
        }
        i++;
        array[k++].I=counter;
    }
    merge_sort(array, 0, k-1);
    for(i=0;i<k;i++){
        printf("%d %c %d", array[i].I, array[i].C, array[i].P);
        printf("\n");
    }
}