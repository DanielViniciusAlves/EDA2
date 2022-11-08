#include<stdlib.h>
#include<stdio.h>   

struct node{
    int value;

    struct node *next;
    struct node *previous;
};

struct node *create_node(int value){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value=value;
    new_node->next=NULL;
    new_node->previous=NULL;

    return new_node;
}

struct node * insert_to_head(struct node **head, struct node *temp){
    temp->next=*head;
    (*head)->previous=temp;

    *head = temp;
    return (*head);
}

struct node * insert_to_point(struct node *old_node, struct node *new_node){
    new_node->next=old_node->next;
    old_node->next=new_node;
    new_node->previous=old_node;

    return new_node;
}

struct node * delete_node_previous(struct node *deleted_node){
    struct node * previous_node;
    previous_node = deleted_node->previous;
    previous_node->next=deleted_node->next;
    return previous_node;
}
struct node * delete_node_next(struct node *deleted_node){
    struct node * next_node;
    next_node = deleted_node->next;
    next_node->previous=deleted_node->previous;
    return next_node;
}

struct node *find(int value, struct node *head) {
    struct node *temp;
    temp=head;
    while (temp!=NULL){
        if(temp->value==value){
            return temp;
        }
        temp=temp->next;
    }
    
    return NULL;
}

void print_list(struct node *head){
    struct node *temp = head;
    while(temp!= NULL){
        printf(" %d -", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct node *head; struct node *temp;
    head = create_node(10);
    insert_to_head(&head, create_node(11));
    insert_to_head(&head, create_node(10));
    insert_to_head(&head, create_node(9));


    insert_to_point(find(10, head), create_node(12));
    print_list(head);
    delete_node_next(find(12, head));
    delete_node_previous(find(12, head));
    print_list(head);
    insert_to_point(find(10, head), create_node(12));
    print_list(head);
    

    return 0;
}