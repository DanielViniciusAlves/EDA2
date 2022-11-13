#include<stdlib.h>
#include<stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x){
    for (celula *temp = le->prox; temp != NULL && temp->dado != x; temp = temp->prox) {
        ;;
    }
}

celula *busca_rec(celula *le, int x){
    if (le->prox == NULL) {
        return NULL;
    }
    if (le->prox->dado == x) {
        return le->prox;
    }
    busca_rec(le->prox, x);
}