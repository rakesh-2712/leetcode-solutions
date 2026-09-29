# Reverse Linked List

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/reverse-linked-list/

## Approach

Use three pointers: `prev`, `current`, and `next`. Save the next node before changing the current node's link. Reverse the current node's pointer toward `prev`, then move both pointers forward. At the end, `prev` becomes the new head of the reversed list.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
head = [1,2,3,4,5]

Output:
[5,4,3,2,1]

### Test Case 2 — Edge Case

Input:
head = []

Output:
[]

## Notes / Edge Cases

- An empty list returns `NULL`.
- A single-node list remains unchanged.
- The reversal is performed in place without creating a new linked list.
