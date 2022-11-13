#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p)
{
    celula *temp = p->prox;
    if (temp != NULL) {
        int dado = temp->dado;

        p->prox = temp->prox;
        // Free libera o espaco alocado na memória
        free(temp);
        return 0;
    }
}

int remove_elemento(celula *le, int x)
{
    celula *temp;

    for (temp = le; temp->prox != NULL && temp->prox->dado != x; temp = temp->prox){
        ;
    }
    remove_depois(temp);
}

int remove_todos_elementos(celula *le, int x)
{
    celula *temp1, *temp2;
    do{
        for (temp1 = le; temp1->prox != NULL && temp1->prox->dado != x; temp1 = temp1->prox){
            ;
        }

        temp2 = temp1->prox;

        remove_depois(temp1);


    } while (temp2 != NULL);
}
