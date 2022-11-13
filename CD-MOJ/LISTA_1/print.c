#include<stdlib.h>
#include<stdio.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void imprime (celula *le){
    celula *temp = le;

    while(temp->prox!= NULL){
        printf("%d -> ", temp->prox->dado);
        temp = temp->prox;
    }
    printf("NULL\n");
}

void imprime_rec (celula *le){
    if(le->prox != NULL){
        printf("%d -> ", le-> prox -> dado);
        imprime_rec(le->prox);
    } else{
        printf("NULL\n");
    }
}

