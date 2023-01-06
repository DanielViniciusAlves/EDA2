# Quick Sort

## Defining the Quick Sort

The Quick Sort is similar to the Merge Sort, in the idea to use Divide and Conquerer paradigm. This means that the Quick Sort will divide the array in several small pieces to obtain a sorted array. The Quick Sort achieve this is be choosing the pivot (normally the pivot will be the first or last element of the array), separating the array between all the smaller numbers and all of the higher numbers. Then once the array is divided into two smaller arrays the same process is made, until the array can't be divided anymore.
\
\
\
\
[<img src="https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif">](https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)


## Complexity Level

Another important information about the Merge Sort is that the level of complexity is O(n log n). A important point about Merge Sort complexity is that doesn't matter the way that the array is sorted, the complexity level will remain the same, this means that there are no worst case every single case will be a O(n log n) complexity level.  

## Merge Sort Stability

### What is Stability to a Sorting Algorithm?

Stability defines the ability of the algorithm to maintain the same order from the keys in the input data. That means that after ordering the data the keys that are equals will be arranged in the same way as th input.
\
\
\
\
[<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220825145858/del.png">](https://www.geeksforgeeks.org/stable-and-unstable-sorting-algorithms/)


### What is the Merge Sort Stability?

After defining what is stability for sorting algorithms we can see that the IMerge Sort is stable. This means that: 

 During the merging process, we preserve the ordering of equivalent objects. If the first element of the left list being merged is equivalent to the first element of the right list, we always insert the element from the left list before the right list. Through this process we always preserve the inital relative ordering of equivalent items in the list, resulting in a stable sorting algorithm.

-- <cite>Kelly Lin, https://inst.eecs.berkeley.edu/~cs61b/sp20/docs/sorting_notes.html</cite>