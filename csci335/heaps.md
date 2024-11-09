## Recap - Hash map

- benefits of hashing - efficient lookup, insert, delete, average O(1)
    - with a good hash function the worst case is not likely to occur
    - efficient in practice
    - a lot of tech interview ques are solved most efficiently with hash
    - range searches are inefficient, would have to go through the whole hash
    - hash is not ordered

## Heap - priority queue

- useful for tracking the max or min element while allowing insertions and deletions
- a queue of tasks
- not fifo
- priority is assigned to each task and always able to pull the highest priority task next
- more efficeint to not sort it completely, but create a partial ordering
- binary heap
- ADT - abstract data type
- functionality is similar to a regular queue/stack but implementation is not
- priority queue - highest priority out first
- implemented using heaps
- ADT - specifies the behavior required by the data
- pq - has two opers
    - insert element with priority X
    - remove and return element with highest priority
- heap is used for pq or adt case where you need to track the min or max element
- basic binary heap will be defined either min heap or max heap
### binary heap

- two properties
    - structured the same as a complete binary tree
    - every node has a higher priority than its children
- the root has the highest priority
- not guaranteed that a node has a higher priority than nodes on a lower level that are not its descendants
- with vectors, insert is O(N), delete is O(N)
- with linked list, insert is O(1), delete is O(N)

- binary tree
- array impl
- structure proper: to find the left child in an array, you multiply by 2, to find right you do mult by 2 +1
- min heap - the lower the value the higher the priority
- in a min heap, the max element will be any leaf
- all nodes of depth d are 2^d to 2^d + 1
- benefits of array impl:
    - fewer mem allocations
    - better cache efficiency
    - o(1) to add new element
    - technically has O(1) access
- basic heap operations
    - insert and delete min
    - insert is O(log N) worst case and O(1) average case for repeated insertions
    - insert has 2 steps
    - delete has 2 steps
- deque - inbetween a vector and a linked list
- c++, container adaptors
- percolateup - put the new element in the last position of the heap and then swap it into its proper place in the heap
- percolatedown - for a min heap, you compare an element to the lesser of its two childrena nd if its greater than the lesser of its two children then you swap them, find the lowest between the node and its two children and swap to put the lowest on the top
- use hole to swap to make it more efficient
- buildheap - creating a heap, anytime you have a list of elements in any datastruc, and you want to convert them into the heap
- if you insert one by one, the avg case is O(N) and worst case is O(NlogN)
- heapify operation - take an existing vector and you heapify it, which turns it into a heap
- instead of inserting one at a time, start from the leafs and move up the heap and percolate down each node
- if we start from the bottom and call percolate down on each node, how far will each node go?
- can start with the parent of the last element
- top to bottom percolate down will not yield the right answer!
