# Binary Search

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/binary-search/

## Approach

Use binary search on the sorted array. Maintain a left and right boundary and calculate the middle index. If the middle element equals the target, return its index. If the target is greater, search the right half; otherwise, search the left half.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
```text
nums = [-1,0,3,5,9,12]
target = 9