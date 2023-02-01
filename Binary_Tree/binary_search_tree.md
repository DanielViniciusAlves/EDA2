# Binary Search Tree

## Defining the Binary Search Tree

A Binary Search Tree uses the Binary Tree as the base to create a tree in which the left node will always be lesser then the parent and the right node will always be greater. It's important to notice that this proprieties will be applied to the children and so on. Here It's a example of how would be arrange a binary search tree:

[<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221215114732/bst-21-660x358.png">](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221215114732/bst-21-660x358.png)

There some ways of implementing a binary search tree:

- Double Linked List : in this implementation the action to insert and remove take O(1) and to search take O(n).

- Non Ordered Vector: it takes O(1) to insert and remove an element and O(n) to search for an element.

- Ordered Vector: in this type of implementation the search takes O(log N) and to remove and insert an element takes O(n).