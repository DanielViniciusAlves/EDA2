#include<stdlib.h>
#include<stdio.h>

struct node
{
    int value;

    struct node *next;
};

void insert_at_start(int value, struct node **last){

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if(*last == NULL){
        temp->value=value;
        temp->next=temp;
        *last=temp;
    } else{
        temp->value=value;
        temp->next=(*last)->next;
        (*last)->next=temp;
    }
}

void insert_at_end(int value, struct node **last){

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if(*last == NULL){
        temp->value=value;
        temp->next=temp;
        *last=temp;
    } else{
        temp->value=value;
        temp->next=(*last)->next;
        (*last)->next=temp;
        *last=temp;
    }

}

struct node *create_node(int value){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value=value;
    new_node->next=NULL;

    return new_node;
}

struct node * insert_to_point(struct node *old_node, struct node *new_node){
    new_node->next=old_node->next;
    old_node->next=new_node;

    return new_node;
}

struct node *find(int value, struct node *last) {
    if(last==NULL){
        return NULL;
    } else{
        struct node * temp;
        temp = last->next;
        do {
            if(temp->value==value){
                return temp;
            }
            temp=temp->next;
        } while (temp!=last->next);
        
    }
}

void print_all(struct node **last){
    if(*last==NULL){
        printf("\nList is empty\n");
    } else{
        struct node* temp;
        temp = (*last)->next;
        do {
            printf("\nData = %d\n", temp->value);
            temp = temp->next;
        } while (temp != (*last)->next);
    }
}

int main(){
    struct node * last = NULL;

    insert_at_end(10, &last);
    insert_at_end(11, &last);
    insert_at_end(12, &last);
    insert_to_point(find(10, last), create_node(15));
    insert_at_end(13, &last);

    print_all(&last);

    return 0;
}