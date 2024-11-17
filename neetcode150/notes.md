# Notes

## Merge Sorted Array

- the arrays are sorted by non-decreasing order so start from the back of both arrays since they are guaranteed to have the largest elements
- use three pointers
- after the comparison operation, copy `nums2` remaining elements (if any) over to `nums1`

## Remove Element

- make sure the while condition is `<=`
- O(N)
- no need to actually remove anything just swap with the last element in the array by using two pointers

## Two Sum

- use a hashmap
- there is always exactly one solution
- store the element as the key and its index as the value
- you are looking for `target - nums[i]` in the hash map, if its there then you've found your answer

