# Merge Two Sorted Lists

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/merge-two-sorted-lists/

## Approach

Use a dummy node and a pointer to build the merged list. Compare the current nodes of both sorted lists and attach the smaller node to the merged list. Continue until one list is empty, then attach the remaining nodes from the other list.

## Time Complexity

O(n + m)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
list1 = [1,2,4]
list2 = [1,3,4]

Output:
[1,1,2,3,4,4]

### Test Case 2 — Edge Case

Input:
list1 = []
list2 = []

Output:
[]

## Notes / Edge Cases

- Either input list can be empty.
- If one list becomes empty, append the remaining nodes from the other list.
- The existing nodes are reused instead of creating a new list of nodes.
