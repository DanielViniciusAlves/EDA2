# Quick Sort

## Defining the Quick Sort

The Quick Sort is similar to the Merge Sort, in the idea to use Divide and Conquerer paradigm. This means that the Quick Sort will divide the array in several small pieces to obtain a sorted array. The Quick Sort achieve this is be choosing the pivot (normally the pivot will be the first or last element of the array), separating the array between all the smaller numbers and all of the higher numbers. Then once the array is divided into two smaller arrays the same process is made, until the array can't be divided anymore.
\
\
\
\
[<img src="https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif">](https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)


## Complexity Level

Another important information about the Quick Sort is that the level of complexity is O(n log n). But It's important to notice that the complexity isn't constant to all cases, this means that when the array is arrange in a decrescent way and the algorithm is trying to organize in a crescent way then the Quick Sort will have a complexity level of  O(n2). 

This may produce the question of why choose a Quick Sort and not the Merge Sort since both of then have the same complexity level. Well, the first advantage of the Quick Sort is that It doesn't require additional space to organize the array, another important point is that the implementation of this sorting algorithm is faster than other kinds of algorithm that have a O(log n), this is done by making the decisions choice of the implementation smarter.

## Quick Sort Stability

### What is Stability to a Sorting Algorithm?

Stability defines the ability of the algorithm to maintain the same order from the keys in the input data. That means that after ordering the data the keys that are equals will be arranged in the same way as th input.
\
\
\
\
[<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220825145858/del.png">](https://www.geeksforgeeks.org/stable-and-unstable-sorting-algorithms/)


### What is the Merge Sort Stability?

After defining what is stability for sorting algorithms we can see that the Quick Sort is not stable.  This means that if there are two elements in the array with the same value, their relative order may not be preserved after the array is sorted.equivalent items in the list, resulting in a stable sorting algorithm.

**Important: most of the cases the Merge Sort is not stable, but can be implemented in a way to maintain the stability. Most of the ways is not done this way, since some of the performance is lost.**