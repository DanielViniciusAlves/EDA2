# Insertion Sort

## Defining the Insertion Sort

The insertion sort is one of the most simple types of sorting, it will work similar to sorting a card. That means that the array is divided in sorted and unsorted, and the values unsorted are putted in the correct point in the sorted part of the array.

The idea behind the implementation of this type of sorting is that considering a array filled with numbers, we will get the first two elements and compare then, once is defined the smallest element it will rearrange the array putting the smallest one in the front and so on comparing the next two elements. This idea can be better defined by the animation:


[<img src="https://developer.download.nvidia.com/devblogs/DSAlgorithmGuide.gif">](https://developer.nvidia.com/blog/insertion-sort-explained-a-data-scientists-algorithm-guide/)


## Complexity Level

Another important information about the Insertion Sort is that the level of complexity is O(n²) in the worst case. This means that the worst and average case take a time proportional to the square of the numbers of elements in the list. And the level of complexity in the best case will take O(n), which means that the time sort a list is proportional to the number of elements in the list.

The worst case will be when the array is in a decreasing order and the best case is whe the list is already organized in a creasing order.

* Obviously the worst case is this document is considering  that the developer is trying to arrange the array in a creasing order. The same applies to the best case.

## Insertion Sort Stability

### What is Stability to a Sorting Algorithm?

Stability defines the ability of the algorithm to maintain the same order from the keys in the input data. Tha means that after ordering the data the keys that are equals will be arranged in the same way as th input.

[<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220825145858/del.png">](https://www.geeksforgeeks.org/stable-and-unstable-sorting-algorithms/)

### What is the Insertion Sort Stability?

After defining what is stability for sorting algorithms we can see that the Insertion Sort is stable. This means that: 

During the selection sort process, we will only swap the ordering of any two items if the item on the right is less than the item to its left. Therefore, the ordering of two equivalent items will always be preserved in insertion sort.

-- <cite>Kelly Lin, https://inst.eecs.berkeley.edu/~cs61b/sp20/docs/sorting_notes.html</cite>