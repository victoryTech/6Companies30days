// for the question find max 10 numbers in a list having 10M entries.
// question link is not given so I have the given the approach.

/*
Maintain a minHeap of size 10
Let's say you insert first 10 numbers (1,2,3,4,5,6,7,8,9,10) to the heap so that "1" will be the root
Now next number is 11
compare 11 with the root element
if it is greater then remove the root and insert the number
if it is smaller then do nothing

In the end you will have largest 10 elements in the heap
*/