# Two Sum

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/two-sum/

## Approach

Use a brute-force approach with two nested loops. For every pair of elements, check whether their sum equals the target. When a matching pair is found, return their indices.

## Time Complexity

O(n²)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
```text
nums = [2,7,11,15]
target = 9