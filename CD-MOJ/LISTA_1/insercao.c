#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

// This function will insert at the head of the list a node, the double pointer is explained above!
void insere_inicio(celula *le, int x){
    celula *new_node = malloc(sizeof(celula));
    new_node->dado = x;
    // new_node->next= NULL;

    // return new_node;
    new_node->prox=le->prox;
    le->prox=new_node;
    // return head;
}

void insere_antes(celula *le, int x, int y){
    celula *temp;
    for (temp = le; temp->prox != NULL && temp->prox->dado != y; temp = temp->prox){
        ;;
    }
    insere_inicio(temp, x);
}
