# Valid Anagram

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array of size 26 to count the occurrences of each lowercase letter in the first string. Decrease the corresponding count for each character in the second string. If all counts are zero, the two strings are anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
```text
s = "anagram"
t = "nagaram"