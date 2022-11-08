# Linked List
There are three different types of linked list:
* Simple Linked List
* Double Linked List
* Circular Linked List

## Simple Linked List

This type of list defines a head and a tail, which will point to NULL, each node will have a pointer with the address of the next node and so on..

[<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124319/Singly-Linked-List1.png">](https://www.geeksforgeeks.org/types-of-linked-list/)

## Double Linked List

The Double Linked List will maintain a head and a tail, but the difference is that the head will also point to NULL. This is going to happen due to the possibility to go forward and backwards in this type of list, adding the need to treat the case when the end of the list is reached in both cases (head and tail). 

[<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124412/Doubly-Linked-List.png">](https://www.geeksforgeeks.org/types-of-linked-list/)

## Circular Linked List

A Circular Linked List has no head and no tail, you can begin at any node and as you traverse the list you will reach the node were you began. This happens because the tail will have a pointer to the address of the head, making a circular list.

[<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124456/Circular-Linked-List.png">](https://www.geeksforgeeks.org/types-of-linked-list/)

* In this directory will have some implementations of the lists discussed here.

[<img src="https://prepinsta.com/wp-content/uploads/2020/07/Linked-list-in-C-meme-2.jpg">](https://prepinsta.com/c-program/singly-linked-list/)