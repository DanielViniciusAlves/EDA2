#include<stdlib.h>
#include<stdio.h>

// Basically what the double pointer is doing is letting me change the pointer it self and no just a copy of it, what that means is that the pointer that was altered
// in the function, such as insertStart, will have it value change in the hole code even outside th function. This example can be seen in the main function
// where the pointer value is accessed with the "&", and the value accessed is not the same as it was, this happens because of the double pointer used in the functions!!

struct node{
    int value;
    //This pointer will point to the next Node in the list
    struct node *next;
};


// This is a simple function to create node, basically will receive a value will create a pointer to the struct with the name of new_node, 
// this struct is going to point to NULL, and then will return the struct.
struct node *create_new_node(int value){
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next= NULL;
    return new_node;
}

// This function will insert at the head of the list a node, the double pointer is explained above!
struct node* insert_node_at_head(struct node *temp, struct node **head){
    temp->next=*head;
    *head=temp;
    return *head;
}

void print_list(struct node *head){
    struct node *temp = head;

    while(temp!= NULL){
        printf(" %d -", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

struct node* find(int value, struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        if(temp->value == value){
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

struct node* insert_at_point(struct node *new_node, struct node *temp){
    new_node->next=temp->next;
    temp->next=new_node;
}


int main()
{
    struct node* temp; struct node* head = NULL;
    for(int i=0; i<11; i++){
        insert_node_at_head(create_new_node(i), &head);
    }
    print_list(head);

    temp = find(5, head);
    printf("%d ", temp->value);

    insert_at_point(create_new_node(100), find(5, head));
    print_list(head);

    return 0; 
}