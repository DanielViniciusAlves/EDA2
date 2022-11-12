# Merge Sort

## Defining the Merge Sort

The Merge Sort Algorithm is based in the Divide and Conquer paradigm. Basically this means that the array will be divided *n* times so the complexity level of ordering the array is way faster. Once the array is at its minimum size, which means that each array will have at max 2 elements, the merge algorithm will start working. The merge works by getting the two smallest arrays and combining then to make eventually, a bigger array.
\
\
\
\
[<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif">](https://en.wikipedia.org/wiki/Merge_sort)


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