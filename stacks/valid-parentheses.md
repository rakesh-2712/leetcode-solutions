# Valid Parentheses

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket is encountered, check whether it matches the most recent opening bracket. If it does not match, return false. At the end, the stack must be empty for the brackets to be valid.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

### Test Case 1 — Typical Case

Input:
s = "()[]{}"

Output:
true

### Test Case 2 — Edge Case

Input:
s = ""

Output:
true

## Notes / Edge Cases

- An empty string is considered valid.
- Closing brackets must match the most recent unmatched opening bracket.
- The stack must be empty after processing the complete string.
